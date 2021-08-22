// online judge - 11777

#include <stdio.h>

int main()
{
    int T, tf1, tf2, final, attn, i, j, min_ct, ct, avg_ct, total;
    
    scanf("%d\n", &T);
    
    for(i=0; i<T; ++i) 
    {
        scanf("%d ", &tf1);
        scanf("%d ", &tf2);
        scanf("%d ", &final);
        scanf("%d ", &attn);
        
        printf("Case %d: ", i+1);
        
        min_ct = 21;
        avg_ct = 0;
        
        for(j=0; j<3; ++j)
        {
            scanf("%d ", &ct);
            
            if (ct < min_ct)
                min_ct = ct;
                
            avg_ct += ct
        }
        
        avg_ct = (avg_ct - min_ct) / 2
        
        total = tf1 + tf2 + final + attn + avg_ct;
        
        if(total >= 90)
            printf("A");
        else if(total >= 80 && total < 90)
            printf("B");
        else if(total >= 70 && total < 80)
            printf("C")
        else if(total >= 60 && total < 70)
            printf("D")
        else
            printf("F")
        
        printf("\n");
    }
    
    return 0;
}
