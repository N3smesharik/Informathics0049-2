#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }
}
