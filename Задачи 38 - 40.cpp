#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h>

double pow(double a, double n)
{
    double res = 1;
    for (int i = 0; i < n; i++)
    {
        res *= a;
    }
    return res;
}
double fact(double n)
{
    double res;
    if (n == 0.0)
    {
        res = 1.0;
        return res;
    }
    res = fact(n - 1.0) * n;
    return res;
}
double Exp(double x)
{
    double res = 1;
    for (int i = 1; i <= x; i++)
    {
        res += pow(2.721, i) / fact(i);
    }
    return res;
}
int main()
{
    double x;
    scanf("%lf", &x);
    printf("%lf", Exp(x));
    return 0;
}