// online judge - 11799

#include <stdio.h>

int main()
{
    int i, j, T, n, speed[101], max;
    
    scanf("%d\n", &T);
    
    for (i=0; i < T; ++i)
    {
        max = 0;
        
        scanf("%d ", &n); 
        
        for(j=0; j < n; ++j)
        {
            scanf("%d ", &speed[j]);
            if (speed[j] > max)
                max = speed[j];
        }
        
        printf("Case %d: %d\n", i+1, max);
    }
    
    return 0;
}
