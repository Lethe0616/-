/*
有一只兔子，从出生后第3个月起每个月都生一只兔子，小兔子长到第三个月后每个月又生一只兔子，假如兔子都不死，问每个月的兔子总数为多少？
*/
#include <stdlib.h>
#include <stdio.h>
int main()
    {
    int month;
    while(scanf("%d", &month) != EOF)
        {
        int i;
        long sum;
        long x, y;
        x = 1;
        y = 1;
        if(month > 2)
        {
            for(i = 3; i <= month; i++)
                {
                sum = x + y;
                x = y;
                y = sum;
                }
        }
        printf("%ld", sum);
        printf("\n");
        }
    return 0;
    }
