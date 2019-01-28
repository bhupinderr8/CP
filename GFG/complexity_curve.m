clc; clear all; close all;

f = @(x) x^log(x);
g = @(x) 2^x;
h = @(x) x;
arr = linspace(1, 1000, 1000);

fplot(g, [1, 20]);
hold on
fplot(f, [1, 20]);
hold on
fplot(h, [1, 20])
