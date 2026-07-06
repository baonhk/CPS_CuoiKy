
%BookTitle: Digital Twin Development and Deployment On Cloud Using Matlab
%SimScape
%Chapter: 9
%Section: 5
%Authors: Nassim Khaled and Bibin Pattel
%Last Modified: 09/10/2019

clc
clear all

%% Initialize the Simscape Motor Plant Tunable Parameters

ET_Armature_Resistance = 0.1;
ET_Armature_Inductance = 0;
ET_Back_EMF_Constant = 0.1;

M_Rotor_Inertia = 0;
M_Rotor_Damping = 0;
M_Initial_Rotor_Speed = 0;

%% Load the Open Loop PWM Sweep Data from Section 9.3

load Chapter_9_Section_3_1_System_ID_Data.mat

%% Separate the Data into Three Regions

%% Linear Region 1

% Save the PWM_Input and Filtered Motor Speed data without Time data
% into temporary variable

time = PWM_Input(:,1);
pwm_input_data = PWM_Input(:,2);
filtered_motor_speed_data = Motor_Speed_RPM_Filtered(:,2);

% From time T = 0 to 700 is the data for Linear Region 1.
% Extract that data and store into a time series data array

PWM_Input_Linear_Region_1 = [time(1:700)-time(1), pwm_input_data(1:700)];

Motor_Speed_RPM_Filtered_Linear_Region_1 = [time(1:700)-time(1), filtered_motor_speed_data(1:700)];

% Plot the Data

[hAx,hLine1,hLine2] = plotyy(PWM_Input_Linear_Region_1(:,1),PWM_Input_Linear_Region_1(:,2),Motor_Speed_RPM_Filtered_Linear_Region_1(:,1),Motor_Speed_RPM_Filtered_Linear_Region_1(:,2));
title('PWM Command Vs Motors Speed Output for Linear Region 1')
xlabel('Time [sec]')