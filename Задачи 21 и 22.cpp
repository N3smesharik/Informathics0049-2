#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h>
int check(double a, double b, double c)
{
    if ((b * b) - (4 * a * c) > 0)
        return 2;
    if ((b * b) - (4 * a * c) == 0)
        return 1;
    return 0;
}
int main()
{
    double a, b, c, x1, x2, d, ch;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0)
    {
        printf("Error");
        return 0;
    }
    ch = check(a, b, c);
    d = (b * b) - (4 * a * c);
    printf("%lf ", ch);
    if (ch == 2)
    {
        x1 = -b - sqrt(d);
        x2 = -b + sqrt(d);
        printf("%lf %lf ", x1, x2);
    }
    if (ch == 1)
    {
        x1 = -b / (2 * a);
        printf("%lf ", x1);
    }
    return 0;
}