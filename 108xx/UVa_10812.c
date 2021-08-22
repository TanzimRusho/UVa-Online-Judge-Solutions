// online judge - 10812

#include <stdio.h>

int main()
{
    int T, s, d, largest, smallest;
    
    scanf("%d\n", &T);
    
    while(T--)
    {
        scanf("%d %d\n", &s, &d);
        
        if ((s < d) || (s==d && s!=0 && d!=0) || (s>d && s%2!= 0 && d%2==0)
        || (s>d && s%2 == 0 && d%2 != 0)){
            printf("impossible\n");
            continue;
        }
        else if (s > d &&  ((s % 2 ==0 && d%2==0) || (s%2!=0 && d%2!=0)))
        {
            largest = (s+d)/2;
            smallest = (s-d)/2;
        }
        else if (s==d && s==0 && d==0)
        {
            largest = 0;
            smallest = 0;
        }    
        
        printf("%d %d\n", largest, smallest);
    }
    
    return 0;
    
}
