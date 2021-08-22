# online judge - 11636 (in C)

#include <stdio.h>
#include <math.h>

int main()
{
    double N, result;
    int i=0;
    
    while(1) 
    {
        scanf("%lf\n", &N);
        if (N < 0)
            break;
        else 
        {
            ++i;
            result = ceil(log(N) / log(2));
            printf("Case %d: %d\n", i, (int)result);
        }
    }

    return 0;
}
