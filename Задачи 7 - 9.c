#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, max = 0;
    for(;;)
    {
        scanf("%d\n", &a);
        if (a == 0)
            break;
        else if (a > max)
            max = a;
    }
    printf("%d", max);
}
