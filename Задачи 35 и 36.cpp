// ConsoleApplication16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h>
double sum(double a, double b)
{
    return a + b;
}
double sub(double a, double b)
{
    return a - b;
}
double comp(double a, double b)
{
    return a * b;
}
double div(double a, double b)
{
    return a / b;
}
char con(char a, char b)
{
    return a & b;
}
char diz(char a, char b)
{
    return a || b;
}
int main()
{
    double a, b;
    int n, k;
    scanf("%lf %lf %d %d", &a, &b, &n, &k);
    printf("%lf %lf %lf %lf %d %d", sum(a, b), sub(a, b), comp(a, b), div(a, b), con(n, k), diz(n, k));
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
