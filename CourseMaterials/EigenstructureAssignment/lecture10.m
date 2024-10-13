clear all;
close all;

%% MIMO plant definition
A = [-1 -6; 1 4];
B = [3 0; -1 1];
C = eye(2); % full-state feedback
D = zeros(2,2);
% open-loop plant dynamics definition
sys = ss(A,B,C,D);

%% Study system stability and controllability
eig(A); % open loop is unstable!
rank(ctrb(A,B)); % system is fully controllable!

%% controllability of first input only
rank(ctrb(A,B(:,1))); % system is partially controllable using u(1) only!

%% controllability of second input only
rank(ctrb(A,B(:,2))); % system is fully controllable using u(2) only!

%% SISO pole placement using only 2nd input u(2)!
p = [-3; -2] % desired poles at s=-2 and s=-3 (design choice)
Bo = B(:,2) % we use only second input here
K = place(A,Bo,p) % compute SISO pole placement
[V,D] = eig(A-Bo*K) % compute eigenvectors and values: notice that eigenvectors are not aligned with canonical axes!
% simulate initial position from (0,1):
x0 = [0;1]
initial(ss(A-Bo*K,zeros(2,1),eye(2),zeros(2,1)),x0)

%% eigenstructure placement procedure
% compute S matrix for l=-2
Sm2 = [ (A+2*eye(2)) -B]
% compute nullspace for S
Ke = null(Sm2)
% Compute linear combination of vectors of nullspace that aligns with (1,0)
VM = Ke*(Ke(1:2,1:2)\[1;0])
v1 = VM(1:2)
m1 = VM(3:4)

% compute S matrix for l=-3
Sm3 = [ (A+3*eye(2)) -B];
% compute nullspace for S
Ke = null(Sm3);
% Compute linear combination of vectors of nullspace that aligns with (0,1)
VM = Ke*(Ke(1:2,1:2)\[0;1]);
v2 = VM(1:2);
m2 = VM(3:4);

% Compute eigenstructure assignment controller from desired eigenstructure!
V = [v1 v2]
M = [m1 m2]
K = M*inv(V)

% simulate initial position from (0,1) again:
figure;
x0 = [0;1];
initial(ss(A-B*K,zeros(2,2),eye(2),zeros(2,2)),x0);
