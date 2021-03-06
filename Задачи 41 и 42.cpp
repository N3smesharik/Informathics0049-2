﻿// ConsoleApplication16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <iostream>
long int fact(long int a)
{
    int res = 1;
    for (int i = 2; i <= a; ++i)
        res *= i;
    return res;
}
int main()
{
    long double res = 0, p = 1, n;
    long int e, i = 1;
    scanf("%lf %d", &n, &e);
    for (int j = 1; j <= e; j++)
    {
        p = 1;
        for (int l = 0; l < i; l++)
        {
            p *= n;
        }
        if (j % 2 == 1)
            res += p / fact(i);
        else
            res -= p / fact(i);
        i += 2;
    }
    printf("%.3lf %.3lf", res, sqrt(1 - (res * res)));
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
