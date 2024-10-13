%% main code containing input values
% all units are in SI 
% x = [vn; vd; the; thed; gam; gamd] 
% u = [T1; T2]
% w = [wn; wd]
% drone = structure containing all drone physical parameters


%% drone parameters
drone.mass_drone = 1;
drone.mass_cup = 1;
drone.length_cg_cup = 1;
drone.length_cg_propeller = 1;
drone.inertia = 1;
drone.drag = 0.01;
drone.gravity = 10;

%%
x_trim = [0 0 0 0 0 0];
W = (drone.mass_cup + drone.mass_drone)*drone.gravity;
u_trim = [W/2 W/2];
w_trim = [0 0]; 

%% obtaining solution x_dot from function drone_dynamics
delta = 1e-3; 
A = zeros(6,6);
B = zeros(6,2);
E = zeros(6,2);

for k = 1:6
    dx = zeros(1,6);
    dx(k) =  1i*delta;
    A(:,k) = imag(drone_dynamics(x_trim+dx,u_trim,w_trim,drone))/delta;
end     
for k = 1:2
    du = zeros(1,2);
    du(k) =  1i*delta;
    B(:,k) = imag(drone_dynamics(x_trim,u_trim+du,w_trim,drone))/delta;
end     
for k = 1:2
    dw = zeros(1,2);
    dw(k) =  1i*delta;
    E(:,k) = imag(drone_dynamics(x_trim,u_trim,w_trim+dw,drone))/delta;
end 
A
B
E