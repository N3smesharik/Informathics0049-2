#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    int n, m = 0, k = 1;
    scanf("%d", &n);
    n = sqrt(n);
    int M[100][100];
    if (n > 100)
    {
        printf("Ti cho, ebanytui?");
        return 0;
    }
    if (n % 2 != 0)
    {
        M[n / 2][n / 2] = (n * n);
    }
    for (int i = 0; i < (n / 2); i++) 
    {
        for (int j = i; j < (n - i); j++) 
        {   
            M[i][j] = m;
            m++;
        }
        for (int j = 1; j < (n - i - i); j++) 
        {   
            M[j + i][n - i - 1] = m;    
            m++;
        }
        for (int j = n - 2 - i; j >= i; j--) 
        {  
            M[n - i - 1][j] = m;           
            m++;
        }
        for (int j = (n - i - 2); j > i; j--) {
            M[j][i] = m;
            m++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}
