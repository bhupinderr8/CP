clc; clear all; close all;

f = @(x) x^1/2;
g = @(x) log(x);
h = @(x) x;
arr = linspace(1, 1000, 1000);

fplot(g, [1, 20]);
hold on
fplot(f, [1, 20]);
hold on
fplot(h, [1, 20])
