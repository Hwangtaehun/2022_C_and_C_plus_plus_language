#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    for(i = 1; i <=4; i++)
    {
        for(j = 1; j <= 5 - i; j++ )
        {
            putchar(' ');
        }
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        putchar('\n');
    }

    return 0;
}
