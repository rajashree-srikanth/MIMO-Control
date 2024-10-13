fun = @(x) level(x);
% x0 = [-1.2    -4.4475   -4.4975   -0.0500    -0.5   -0.7         -1   -0.0500];
x0 = [-15.2  -5.4475   -4.4975   -0.500  -0.5   -2.7  -4.0   -3.5]
options= optimset('algorithm','active-set','Display','Iter','TolX',1e-4,'TolCon',1e-4, ...
    'TolFun',1e-4, 'PlotFcn','optimplotfunccount');

[x, fval,ExitFlag, Output] = fmincon(fun, x0, [],[], [], [], [], zeros(1,8))



% 78.0354