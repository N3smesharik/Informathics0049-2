// ConsoleApplication19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
int visokos(int year)
{
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            return 1;
        return 0;
    }
    else if (year % 4 == 0)
        return 1;
    return 0;
}
void swap(int* a, int* b)
{
    int f = *a;
    *a = *b;
    *b = f;
}
int main()
{
    int y1, m1, d1, y2, m2, d2, check = 1;
    long int res = 0;
    int M[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int MV[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    printf("Yuliansky - 1, Grigoriansky = 2");
    scanf("%d", &check);
    if (check == 2)
    {
        scanf("%d %d %d %d %d %d", &d1, &m1, &y1, &d2, &m2, &y2);
        if ((y1 > y2) || ((y1 == y2) & (m1 > m2)) || ((y1 == y2) & (m1 == m2) & (d1 > d2)))
        {
            swap(&y1, &y2);
            swap(&m1, &m2);
            swap(&d1, &d2);
        }
        if ((y1 == y2) & (m1 == m2) & (d1 == d2))
        {
            printf("0");
            return 0;
        }
        else if ((y1 == y2) & (m1 == m2) & (d1 != d2))
        {
            printf("%d", d2 - d1);
            return 0;
        }
        else if ((y1 == y2) & (m1 != m2) & (d1 != d2))
        {
            while (m1 != m2)
            {
                if (visokos(y1) == 1)
                    res += MV[m1 - 1];
                else
                    res += M[m1 - 1];
                m1 += 1;
            }
            res += d2 - d1;
            printf("%d", res);
            return 0;
        }
        else
        {
            if (m2 < m1)
            {
                y2 -= 1;
                res -= 1;
            }
            while (y1 != y2)
            {
                if (visokos(y1) == 1)
                    res += 366;
                else
                    res += 365;
                y1 += 1;
            }
            while (m1 != m2)
            {
                if (visokos(y1) == 1)
                    res += MV[m1 - 1];
                else
                    res += M[m1 - 1];
                if (m1 == 12)
                    m1 = 0;
                m1 += 1;
            }
            res += d2 - d1;
            printf("%d", res);
            return 0;
        }
    }
    else
    {
        scanf("%d %d %d %d %d %d", &d1, &m1, &y1, &d2, &m2, &y2);
        if ((y1 > y2) || ((y1 == y2) & (m1 > m2)) || ((y1 == y2) & (m1 == m2) & (d1 > d2)))
        {
            swap(&y1, &y2);
            swap(&m1, &m2);
            swap(&d1, &d2);
        }
        if ((y1 == y2) & (m1 == m2) & (d1 == d2))
        {
            printf("0");
            return 0;
        }
        else if ((y1 == y2) & (m1 == m2) & (d1 != d2))
        {
            printf("%d", d2 - d1);
            return 0;
        }
        else if ((y1 == y2) & (m1 != m2) & (d1 != d2))
        {
            while (m1 != m2)
            {
                if (y1 % 4 == 0)
                    res += MV[m1 - 1];
                else
                    res += M[m1 - 1];
                m1 += 1;
            }
            res += d2 - d1;
            printf("%d", res);
            return 0;
        }
        else
        {
            if (m2 < m1)
            {
                y2 -= 1;
                res -= 1;
            }
            while (y1 != y2)
            {
                if (y1 % 4 == 0)
                    res += 366;
                else
                    res += 365;
                y1 += 1;
            }
            while (m1 != m2)
            {
                if (y1 % 4 == 1)
                    res += MV[m1 - 1];
                else
                    res += M[m1 - 1];
                if (m1 == 12)
                    m1 = 0;
                m1 += 1;
            }
            res += d2 - d1;
            printf("%d", res);
            return 0;
        }
    }
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
