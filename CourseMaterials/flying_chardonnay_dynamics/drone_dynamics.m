%% Dynamics of Flying Chardonnay
%% Structure of code
% Drone Dynamics
% All values are in SI units
% x = [vn; vd; the; thed; gam; gamd] 
% u = [T1; T2]
% w = [wn; wd]
% drone = structure containing all drone physical parameters
function x_dot = drone_dynamics(x,u,w,drone)
%% drone parameters
%[md, mc, l, ld, J, CD, g] = [1, 1, 1, 1, 1, 0.01, 10];
md = drone.mass_drone;
mc = drone.mass_cup;
l = drone.length_cg_cup;
ld = drone.length_cg_propeller;
J = drone.inertia;
CD = drone.drag;
g = drone.gravity;

%% equations
% %% initial values ??
% x_dot(3) = x(4);
% x_dot(5) = x(6);

%% State matrix 
A1 = [md 0 0 0 0 0 sin(x(3)+x(5))]; 
A2 = [0 md 0 0 0 0 cos(x(3)+x(5))];
A3 = [mc 0 0 -mc*l*cos(x(3)+x(5)) 0 -mc*l*cos(x(3)+x(5)) -sin(x(3)+x(5))];
A4 = [0 mc 0 mc*l*sin(x(3)+x(5)) 0 mc*l*sin(x(3)+x(5)) -cos(x(3)+x(5))];
A5 = [0 0 0 J 0 0 0];
A6 = [0 0 1 0 0 0 0];
A7 = [0 0 0 0 1 0 0];
A = [A1; A2; A3; A4; A5; A6; A7];

%% h matrix
h1 = -(u(1)+u(2))*sin(x(3)) - CD*(x(1)-w(1));
h2 = md*g - (u(1) + u(2))*cos(x(3)) - CD*(x(2)-w(2));
h3 = (-mc*l*(x(4)+x(6))^2)*sin(x(3)+x(5));
h4 = mc*g - (mc*l*(x(4)+x(6))^2)*cos(x(3)+x(5));
h5 = (u(2)-u(1))*ld;
h6 = x(4);
h7 = x(6);
h = [h1; h2; h3; h4; h5; h6; h7];

%% solving for [x_dot F]
y = A\h;
x_dot = y(1:6);

end







