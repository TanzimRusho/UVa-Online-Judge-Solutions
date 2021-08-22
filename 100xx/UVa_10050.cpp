// online judge - 10050

#include <stdio.h>

int main()
{
    int T, N, P, i, j, k, h[100], hartal_in[3651], count;

    scanf("%d\n", &T);
    
    while(T--)
    {
        scanf("%d\n", &N);
        scanf("%d\n", &P);
        
        for(k=0; k<P; ++k)
        {
            scanf("%d\n", &h[k]);
        }
        
        count = 0;
        
        for(i=1; i<=N; ++i)
        {
            if (!((i+1) % 7) || !(i % 7))
                continue;
            
            hartal_in[i] = 0;
            
            for(j=0; j<P; ++j) 
            {
                if (hartal_in[i] == 1)
                    break;
                
                else if (!(i % h[j])) 
                {
                    hartal_in[i] = 1;
                    ++count;
                }
            }
        }
        
        printf("%d\n", count);
        
    }
    
    return 0;
}
