#include <stdio.h>
#include <stdlib.h>

int Simple(int a)
{
    if (a == 2)
        return 1;
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
            return 0;

    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            printf("%d ", i);
    }
    printf("%d %d", n, Simple(n));
}
