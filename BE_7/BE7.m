%% Transfer function
G1 = tf([-0.25],[1 0.2 0.25]);
G2 = tf([0.25],[1 0.2 0.25]);
G3 = tf([-1],[1 1]);
G4 = tf([-1],[1 1]);
G = [G1 G2; G3 G4];

[sigma_max, omega_max] = sigma(G);
[sigma_max,i] = max(sigma_max(1,:));
omega_max = omega_max(i)
figure;
sigma(G)
% sigma(G,logspace(-1,0,20))
grid on;

%% svd of matrix G
Gjw = evalfr(G, omega_max*1j);
[U,S,V] = svd(Gjw);
U
S
V = V'

%% Q2
w = [2*exp(1j*pi/2); 3];
omega_2 = 10*pi;
Gjw_2 = evalfr(G, omega_2*1j);
[U,S,V] = svd(Gjw_2);
U
S
V = V'
y_2 = Gjw_2*w;
vib_mag = norm(y_2)
h_min = vib_mag*sqrt(3)

