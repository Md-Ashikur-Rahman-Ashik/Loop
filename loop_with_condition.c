#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("\n%d is an even number", i);
        }
        else
        {
            printf("\n%d is an odd number", i);
        }
    }

    return 0;
}