﻿// ConsoleApplication15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h> 
int FibbR(int a)
{
    if (a == 1 || a == 2)
    {
        return 1;
    }
    return FibbR(a - 1) + FibbR(a - 2);
}
int main()
{
    int n, a = 1, b = 1, c, a1, b1;
    scanf("%d %d %d", &n, &a1, &b1);
    printf("%d %d ", 1, 1);
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", b);
    }
    printf("\n");
    a = 2;
    b = 2;
    printf("%d %d ", 2, 2);
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", b);
    }
    printf("\n");
    printf("%d %d ", a1, b1);
    for (int i = 2; i < n; i++)
    {
        c = a1 + b1;
        a1 = b1;
        b1 = c;
        printf("%d ", b1);
    }
    printf("\n%d ", FibbR(n));
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
