% Analysze execution time of timed* examples
clc
clear
close all

%% Read file

timed0_csv = readtable('timed1.csv');

%% Plot
figure
plot(timed0_csv.n, timed0_csv.dt*1000)
xlabel("Sample [#]")
ylabel("time [ms]")
title("Timed0 execution time")
grid on

%% Distribution
clc
close all

figure
histogram(timed0_csv.dt*1000, 500)
title("Execution time histogram")
xlabel("Frequency")
ylabel("Value [ms]")
xlim([0 10])
grid on

%% Get some statistics

print_exe_time_stats(timed0_csv.dt, 'timed0')