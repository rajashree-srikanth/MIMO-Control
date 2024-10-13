clear all;
close all;

%% drone parameters for this problem
chardonnay.m_d = 1;
chardonnay.m_c = 1;
chardonnay.l = 1;
chardonnay.l_d = 1;
chardonnay.J = 0.1;
chardonnay.C_D = 0.1;
chardonnay.g = 10;

% % uncertainities
% percent = 1.05;
% chardonnay.m_d = chardonnay.m_d*percent;
% chardonnay.m_c = chardonnay.m_c*percent;
% chardonnay.l = chardonnay.l*percent;
% chardonnay.l_d = chardonnay.l_d*percent;
% chardonnay.J = chardonnay.J*percent;
% chardonnay.C_D = 0.1;
% chardonnay.g = 10;

% % modelling uncertainities
% rng('shuffle');
% ll = -0.05;
% ul = 0.05;
% uc = [rand*(ul-ll)+ll rand*(ul-ll)+ll rand*(ul-ll)+ll rand*(ul-ll)+ll rand*(ul-ll)+ll]
% uc = uc+1
% chardonnay.m_d = chardonnay.m_d*uc(1);
% chardonnay.m_c = chardonnay.m_c*uc(2);
% chardonnay.l = chardonnay.l*uc(3);
% chardonnay.l_d = chardonnay.l_d*uc(4);
% chardonnay.J = chardonnay.J*uc(5);
% chardonnay.C_D = 0.1;
% chardonnay.g = 10;

%% controller design (Prof. Lustosa Example - bad design)
K = [ ...
   -2.2361   -2.2361   -3.1109   -2.1804   19.2981    8.2189   38.3907    9.8868;
    2.2361   -2.2361    3.1109   -2.1804  -19.2981   -8.2189  -38.3907   -9.8868 ];

% K = [ ...
%    -1.2361   -2.2361   -3.1109   -2.1804   19.2981    8.2189   30.3907    9.8868;
%     1.2361   -2.2361    3.1109   -2.1804  -25.2981   -8.2189  -43.3907   -9.8868 ];
%% New Controller - attempting eigenstructures
%% Linearization about hover
n = 8 % no of states
% Hover condition - trim
x_trim = [0 0 0 0 0 0 0 0];
W = (chardonnay.m_c + chardonnay.m_d)*chardonnay.g;
u_trim = [W/2 W/2];
w_trim = [0 2];

% Obtaining linearized model about trim point
delta = 1e-3; 
A = zeros(n,n);
B = zeros(n,2);
E = zeros(n,2);

for k = 1:n
    dx = zeros(1,n);
    dx(k) =  1i*delta;
    a = chardonnay_dynamics(x_trim+dx,u_trim,w_trim,chardonnay)
    A(:,k) = imag(a)/delta
end     
for k = 1:2
    du = zeros(1,2);
    du(k) =  1i*delta;
    b = chardonnay_dynamics(x_trim,u_trim+du,w_trim,chardonnay)
    B(:,k) = imag(b)/delta;
end     
% for k = 1:2
%     dw = zeros(1,2);
%     dw(k) =  1i*delta;
%     e = chardonnay_dynamics(x_trim,u_trim,w_trim+dw,chardonnay)
%     E(:,k) = imag(e)/delta;
% end 
A
B

%% Analyzing system
% attempting eigenstructures
C = eye(n)
D = zeros(n,2)
sys = ss(A,B,C,D)
eig(sys) % unstable poles exist!
rank(ctrb(A,B)) % system is fully controllable
% if one input only
rank(ctrb(A,B(:,1))) % 7, not fully controllable
rank(ctrb(A,B(:,2))) % 7, not fully controllable - we need both inputs for full control

%% Attempting eigenstructure method for controller
basis = eye(8)
% assuming we want poles at p1 and p2
p1 = -1
% compute S matrix for pole
Sm1 = [(A-p1*eye(8)) -B]
% compute nullspace for S
Ke = null(Sm1)
% Compute linear combination of vectors of nullspace that aligns with
% (1,0,0,0,0,0,0,0)
VM = Ke*(Ke(1:8,1:2)\basis(:,1))
v1 = VM(1:8)
m1 = VM(9:end)
% Trying to automate everything
basis = eye(n);
V = zeros(n);
M = zeros(2);
%%
% assuming we want poles located at p(i)
% p = [1 2 1 0.3 0.2 0.5 2 1]*(-1)
% p = eig(A-B*K)
% x = (pn, pd, vn, vd, the, thed, gam, gamd)
% p = [-15.2  -5.4475   -4.4975   -0.500  -0.5   -2.7  -4.0   -3.5]; - 65.5743%
% p = [-15.2  -5.4475   -4.4975   -0.500  -0.5   -2.7  -4.0   -3.5]; %with change in ref traj, 73%
p = [-15.2382   -5.5377   -4.3416   -0.6719   -0.0019   -2.4971   -3.7963   -3.5184] %76.781138%!!!
% with a slightly higher change in traj speed x_ref(3)->3.2 -> 77.031138% !
%77.0541% - with new traj
%with old traj, and just higher speed in straight line -> 77.079%
% p = [-15.2606   -5.4321   -4.0119   -0.9469   -0.0000   -1.2237   -3.4634   -2.9831]
% p = [-15.2  -5.4475   -4.4975   -0.500  -0.5   -2.7  -4.0   -3.5]
% p = [-50.2, -5.4975, -2.7, -2.5, -1.5, -1.4475, -0.9, -0.5];
for i = 1:8
    % compute S matrix for pole
    Sm1 = [(A-p(i)*eye(8)) -B];
    % compute nullspace for S
    Ke = null(Sm1);
    % Compute linear combination of vectors of nullspace that aligns with
    % desired basis 
    VM = Ke*(Ke(1:8,1:2)\basis(:,i));
    v1 = VM(1:8);
    m1 = VM(9:end);
    V(:,i) = v1;
    M (:,i) = m1;
end
K = (M*inv(V))
% Anew = A-B*K
%% simulation from simulink, animation and display of final water level
% DO NOT MODIFY THIS SECTION!!!!

out = sim('chardonnay_simulinkR2018a', 'ReturnWorkspaceOutputs', 'on');

t = out.simout.Time;
r = out.simout.Data(:,1:2)';
r(2,:) = -r(2,:);
the = out.simout.Data(:,5)';
gam = out.simout.Data(:,7)';

% print water level
l = chardonnay_animate(chardonnay, t, r, the, gam);

%% Analysis of system
% sigma plot
sysCL = feedback(sys,K)
figure
sigmaplot   (sysCL)
[DMI, MMI] = diskmargin(sys*K)
DGM = MMI.GainMargin
figure
diskmarginplot(DGM, 'disk')

% diskmarginplot(sys*K)