%% main code containing input values
% all units are in SI 
% x = [vn; vd; the; thed; gam; gamd] 
% u = [T1; T2]
% w = [wn; wd]
% drone = structure containing all drone physical parameters
x = [1 0.1 deg2rad(10) deg2rad(10) deg2rad(5) deg2rad(5)];
u = [4.8, 5.3];
w = [2 -3]; 
%% drone parameters
drone.mass_drone = 1;
drone.mass_cup = 1;
drone.length_cg_cup = 1;
drone.length_cg_propeller = 1;
drone.inertia = 1;
drone.drag = 0.01;
drone.gravity = 10;

%% obtaining solution x_dot from function drone_dynamics
x_dot = drone_dynamics(x,u,w,drone);
%x_dot(3:6) = rad2deg(x_dot(3:6)); %converting angle entries from rad to deg
x_dot