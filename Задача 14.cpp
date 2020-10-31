#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{
    int n;
    scanf("%d", &a);
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            if (i % 3 == 0)
                printf("FIZZBUZZ ");
            else
                printf("BUZZ ");
        }
        else if (i % 3 == 0)
            printf("FIZZ ");
        else
            printf("%d ", i);
    }
}