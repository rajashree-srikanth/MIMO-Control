function [water_level] = chardonnay_animate(chardonnay,t,r,theta,gamma)
%CHARDONNAY_ANIMATE Creates an animation of trajectory and returns water
% level
%
%   INPUTS:
%     - chardonnay: structure containing drone physical parameters. In this
%     function, the relevant parameters are:
%       - chardonnay.l: pendulum lenght in m (for drawing purposes only)
%       - chardonnay.l_d: drone lenght in m (for drawing purposes only)
%     - t in R(1,N): simulation N time instants (in sec)
%     - r in R(2,N): (X,Z) positions in time (in m, Z pointing up)
%     - theta in R(1,N): drone pitch angle in rad
%     - gamma in R(1,N): pendulum angle (wrt drone) in rad
%
%    OUTPUTS: 
%      - water_level in R(1): water level at the end of simulation
%

l = chardonnay.l;
l_d = chardonnay.l_d;

ROOM_SIZE = 20;

water_level = 1.3*l;

Hand = figure;

vw = VideoWriter('animation.avi');
open(vw);

STORM = 0;
dark = 0;
storm_duration = 0;

% generate random wind points
NUMBER_WIND_POINTS = 20;
wind_r = zeros(2,NUMBER_WIND_POINTS);
for i=1:NUMBER_WIND_POINTS
    wind_r(1,i) = 25+10*rand();
    wind_r(2,i) = -20+40*rand();
end

for id = 1:length(t)
   
    % storm management
    if (abs(r(1,id)-10)<5)
        STORM = 1;
    else
        STORM = 0;
    end
    if (STORM==1)
        storm_duration = storm_duration + randn();
        if (abs(storm_duration)>1)
            if (dark==1)
                dark = 0;
            else
                dark = 1;
            end
            storm_duration = 0;
        end
    else
        whitebg('white')
        NORMAL_COLOR = '.-k';
        dark = 0;
    end
    
    if (dark==1)
        whitebg('black')
        NORMAL_COLOR = '.-w';
    else
        whitebg('white')
        NORMAL_COLOR = '.-k';
    end
    
    
   % drawing fuselage
   dx = [-l_d;-l_d;0;l_d;l_d];
   dy = [l_d/3;0;0;0;l_d/3];
   pr = r(:,id) + [cos(theta(1,id)) -sin(theta(1,id)); sin(theta(1,id)) cos(theta(1,id))]*[dx';dy'];
   pFx = pr(1,:);
   pFy = pr(2,:);
   plot(pFx, pFy, NORMAL_COLOR, 'MarkerSize', 2, 'LineWidth', 2);
   hold on;
   % drawing left propeller
   dx = [-1.4*l_d;-0.6*l_d];
   dy = [l_d/3;l_d/3];
   pr = r(:,id) + [cos(theta(1,id)) -sin(theta(1,id)); sin(theta(1,id)) cos(theta(1,id))]*[dx';dy'];
   pFx = pr(1,:);
   pFy = pr(2,:);
   plot(pFx, pFy, NORMAL_COLOR, 'MarkerSize', 2, 'LineWidth', 2);
   % drawing right propeller
   dx = [1.4*l_d;0.6*l_d];
   dy = [l_d/3;l_d/3];
   pr = r(:,id) + [cos(theta(1,id)) -sin(theta(1,id)); sin(theta(1,id)) cos(theta(1,id))]*[dx';dy'];
   pFx = pr(1,:);
   pFy = pr(2,:);
   plot(pFx, pFy, NORMAL_COLOR, 'MarkerSize', 2, 'LineWidth', 2);
   % drawing cup support
   dx = [0;-l*sin(gamma(id))];
   dy = [0;l*cos(gamma(id))];
   pr = r(:,id) + [cos(theta(1,id)) -sin(theta(1,id)); sin(theta(1,id)) cos(theta(1,id))]*[dx';dy'];
   pFx = pr(1,:);
   pFy = pr(2,:);
   plot(pFx, pFy, NORMAL_COLOR, 'MarkerSize', 2, 'LineWidth', 2);
   dx = [-l*sin(gamma(id));-l*sin(gamma(id))-l/3*cos(gamma(id))];
   dy = [l*cos(gamma(id));l*cos(gamma(id))-l/3*sin(gamma(id))];
   pr = r(:,id) + [cos(theta(1,id)) -sin(theta(1,id)); sin(theta(1,id)) cos(theta(1,id))]*[dx';dy'];
   pFx = pr(1,:);
   pFy = pr(2,:);
   plot(pFx, pFy, NORMAL_COLOR, 'MarkerSize', 2, 'LineWidth', 2);
   dx = [-l*sin(gamma(id));-l*sin(gamma(id))+l/3*cos(gamma(id))];
   dy = [l*cos(gamma(id));l*cos(gamma(id))+l/3*sin(gamma(id))];
   pr = r(:,id) + [cos(theta(1,id)) -sin(theta(1,id)); sin(theta(1,id)) cos(theta(1,id))]*[dx';dy'];
   pFx = pr(1,:);
   pFy = pr(2,:);
   plot(pFx, pFy, NORMAL_COLOR, 'MarkerSize', 2, 'LineWidth', 2);
   % drawing cup
   dx = [-1.1*l*sin(gamma(id)); -1.1*l*sin(gamma(id))+l/3*cos(gamma(id)); -1.1*l*sin(gamma(id))+l/3*cos(gamma(id))-1.3*l*sin(gamma(id))];
   dy = [1.1*l*cos(gamma(id)); 1.1*l*cos(gamma(id))+l/3*sin(gamma(id)); 1.1*l*cos(gamma(id))+l/3*sin(gamma(id))+1.3*l*cos(gamma(id))];
   pr = r(:,id) + [cos(theta(1,id)) -sin(theta(1,id)); sin(theta(1,id)) cos(theta(1,id))]*[dx';dy'];
   pFx = pr(1,:);
   pFy = pr(2,:);
   cup_right_y = pr(2,3);
   plot(pFx, pFy, NORMAL_COLOR, 'MarkerSize', 2, 'LineWidth', 2);
   dx = [-1.1*l*sin(gamma(id)); -1.1*l*sin(gamma(id))-l/3*cos(gamma(id)); -1.1*l*sin(gamma(id))-l/3*cos(gamma(id))-1.3*l*sin(gamma(id))];
   dy = [1.1*l*cos(gamma(id)); 1.1*l*cos(gamma(id))-l/3*sin(gamma(id)); 1.1*l*cos(gamma(id))-l/3*sin(gamma(id))+1.3*l*cos(gamma(id))];
   pr = r(:,id) + [cos(theta(1,id)) -sin(theta(1,id)); sin(theta(1,id)) cos(theta(1,id))]*[dx';dy'];
   pFx = pr(1,:);
   pFy = pr(2,:);
   cup_left_y = pr(2,3);
   plot(pFx, pFy, NORMAL_COLOR, 'MarkerSize', 2, 'LineWidth', 2);
   % draw water
   dx = [-1.1*l*sin(gamma(id))+l/3*cos(gamma(id))-water_level*sin(gamma(id)); -1.1*l*sin(gamma(id))-l/3*cos(gamma(id))-water_level*sin(gamma(id)) ];
   dy = [1.1*l*cos(gamma(id))+l/3*sin(gamma(id))+water_level*cos(gamma(id)) ; 1.1*l*cos(gamma(id))-l/3*sin(gamma(id))+water_level*cos(gamma(id))  ];
   pr = r(:,id) + [cos(theta(1,id)) -sin(theta(1,id)); sin(theta(1,id)) cos(theta(1,id))]*[dx';dy'];
   pFx = pr(1,:);
   pFy = pr(2,:);
   pFx(1) = pFx(1) + l/3*tan(gamma(id)+theta(id))*sin(gamma(id)+theta(id));
   pFy(1) = pFy(1) - l/3*sin(gamma(id)+theta(id));   % right spot!!!
   pFx(2) = pFx(2) - l/3*tan(gamma(id)+theta(id))*sin(gamma(id)+theta(id));
   pFy(2) = pFy(2) + l/3*sin(gamma(id)+theta(id));   % left spot!!!
   if ( pFy(2) > cup_left_y )
       dy = pFy(2) - cup_left_y;
       water_level = water_level-dy/cos(gamma(id)+theta(id));
   end
   if ( pFy(1) > cup_right_y )
       dy = pFy(2) - cup_right_y;
       water_level = water_level-dy/cos(gamma(id)+theta(id));
   end
   plot(pFx, pFy, NORMAL_COLOR, 'MarkerSize', 2, 'LineWidth', 2);
   
   %text(-4.5,-3,'MIMO Control Lectures 2021 - Leandro Lustosa');
   %text(-3.5,-3.5,'Model Predictive Control Example');
   
   % plot sine tunnel
   ang = 0:0.1:2*pi;
   sX = ang/(2*pi)*20;
   sY = -10*sin(ang);
   plot(sX,sY+5,'--k');
   plot(sX,sY-5,'--k');
   
   % plot straight tunnel
   sX = [20 45];
   sY = [0 0];
   plot(sX,sY+5,'--k');
   plot(sX,sY-5,'--k');
   
   % plot wind disturbances animation
   for wi = 1:NUMBER_WIND_POINTS
       wind_r(2,wi) = wind_r(2,wi) - 3;
       if (wind_r(2,wi) < -20)
           wind_r(2,wi) = 20;
       end
       plot([wind_r(1,wi) wind_r(1,wi)], [wind_r(2,wi) (wind_r(2,wi)-1)], '-b');
   end
   
   dx = STORM*sin(2*pi*t(id))*sin(pi*t(id));
   dy = STORM*sin(pi*3*t(id))*sin(pi*0.5*t(id));
   axis equal; axis([(-5+dx) (45+dx) (-ROOM_SIZE+0*dy) (ROOM_SIZE+0*dy)]);
   title(sprintf('Time: %0.2f sec', t(id)));

   hold off;
   
   drawnow;
   
   writeVideo(vw,getframe(Hand));
   
   %% empty water level if bounderies are not respected!
   if ( r(1,id) < 20 ) % we are in the sine region
       if ( r(2,id) > -10*sin(r(1,id)/20*2*pi)+5  || r(2,id) < -10*sin(r(1,id)/20*2*pi)-5 )
           water_level = 0.05*1.3*l;
       end
   end
   if ( r(1,id) > 20 ) % we are in the linear region
       if ( r(2,id) > 5 || r(2,id) < -5 )
           water_level = 0.05*1.3*l;
       end
   end

   %% leak water little by little
   if (id>1)
       water_level = water_level - (1.3*l*1.5/100)*(t(id)-t(id-1));
   end
   
   %% if passed the finish line, stop the grader
   if ( r(1,id) > 39 )
       break;
   end
   
end

water_level = (water_level/1.3*l)*100;
close(vw);

fprintf('Water level is %f%%\n', water_level);

% print if target position was reached!
if ( r(1,length(t)) > 39 )
    fprintf('Passed the finish line!\n');
else
    fprintf('Didnt pass the finish line!\n');
end

end
