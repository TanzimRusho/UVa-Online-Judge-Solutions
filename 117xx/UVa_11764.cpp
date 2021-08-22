// online judge - 11764

#include <stdio.h>

int main()
{
    int T, N, i, j, prev, jump, high_jumps, low_jumps, first_wall;
    
    scanf("%d\n", &T);
    
    for(i=0; i<T; ++i) 
    {
        scanf("%d\n", &N);
        
        high_jumps = 0;
        low_jumps = 0;
        
        scanf("%d ", &first_wall);
        prev = first_wall;
        
        for(j=1; j<N; ++j)
        {
            scanf("%d ", &jump);
            
            if (jump > prev)
                high_jumps += 1;
            else if (jump < prev)
                low_jumps += 1;
                
            prev = jump;
        }
        
        printf("Case %d: %d %d\n", i+1, high_jumps, low_jumps);
        
    }
    
    return 0;
}
