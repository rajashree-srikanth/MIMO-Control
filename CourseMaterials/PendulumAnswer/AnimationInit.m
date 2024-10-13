clear;
close all;

%% window layout

ROOM_SIZE = 1.4;

figure;
figId = gcf().Number;

title('Pendulum animation')
hold on;
axis equal;
axis([-ROOM_SIZE ROOM_SIZE -ROOM_SIZE ROOM_SIZE]);

%% pendulum parameters for this problem
L = 1;
g = 10;

% drawing rod
theta = 0;
dx = [0;L*sin(theta)];
dy = [0;-L*cos(theta)];
plot(dx, dy, '.-k', 'MarkerSize', 2, 'LineWidth', 2, 'Tag', 'rod');
% drawing pendulum ball
dx = [L*sin(theta)];
dy = [-L*cos(theta)];
p=plot(dx, dy, '-o', 'MarkerSize', 20, 'LineWidth', 2, 'Tag', 'ball');
p.MarkerFaceColor = [1 0.5 0];




