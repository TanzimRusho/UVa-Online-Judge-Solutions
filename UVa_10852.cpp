// online judge - 10852

#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    int i, flag = 1;
    
    for(i=2; i <= sqrt(n); ++i)
    {
        if (n%i == 0) {
            //flag = 0;
            return 0;
        }
    }
    if (flag)
        return 1;
}

int main()
{
    int m, n, x;
    
    scanf("%d\n", &m);
    
    while(m--)
    {
        scanf("%d\n", &n);
        
        for(x=2; x<=n; ++x)
        {
            if (!(is_prime(x))) 
                continue;
            
            else if (n < 2*x) {
                printf("%d\n", x); 
                break;
            }
        }

    }
    return 0;
}
