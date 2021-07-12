// online judge 10370 (in C)
#include <stdio.h>

int main()
{
    int T, n, i, j, count, grades[1000];
    double avg, above_avg;
    
    scanf("%d\n", &T);
    
    for(i=0; i < T; ++i)
    {
        avg = 0.0;
        scanf("%d ", &n);
        for (j=0; j < n; ++j)
        {
            scanf("%d ", &grades[j]);
            avg += grades[j]; 
        }
        
        avg = avg / n;
        //printf("%lf ", avg);
        
        count = 0;
        
        for (j=0; j < n; ++j)
        {
            if (grades[j] > avg)
                ++count;
        }
        //printf("%d ", count);
        
        above_avg = ((double)count / (double)n)*100;
        printf("%.3lf%%\n", above_avg);
    }

    return 0;
}
