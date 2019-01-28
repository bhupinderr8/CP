clc; clear all; close all;
a=exp(1);
f =@(x) 1/(x*log(x));
b=exp(1)+1;
n=2;
h = (b-a)/n;
sum=0;
x=0;
for i=1:n
    x = a + h*i;
    sum = sum+ 2*f(x);
end

sum = sum + f(a) + f(b);
sum*(h/2)
