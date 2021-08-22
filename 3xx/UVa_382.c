// online judge - 382 (in C)
#include <stdio.h>

int main()
{
    long int n, i, sum;

    printf("PERFECTION OUTPUT\n");
    while(1)
    {
        scanf("%ld ", &n);
        if (n == 0)
            break;
        else
        {
            sum = 0;
            for (i=1; i < n; ++i) 
            {
                if (n % i == 0)
                    sum += i;
            }
            
            if (sum == n)
                printf("%5ld  PERFECT\n", n);
            else if (sum < n)
                printf("%5ld  DEFICIENT\n", n);
            else
                printf("%5ld  ABUNDANT\n", n);
        }
    }
    
    printf("END OF OUTPUT\n");

    return 0;
}
