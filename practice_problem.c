#include <stdio.h>

int main()
{
    int i, j;

    for (i = 0; i <= 5; i++)
    {
        for (j = 1; j < 3; j++)
        {
            printf("* = %d\n", i);
        }
    }

    return 0;
}