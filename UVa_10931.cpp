// online judge - 10931

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long int n, i, count;
    int a[40];
    
    while(scanf("%ld\n", &n)!=0) 
    {
        if (n==0)
            break;
            
        count = 0;
        
        for(i=0; n > 0; i++)
        {
            if (n % 2 == 0) 
                a[i] = 0;
            else 
            {
                a[i] = 1;   
                ++count;
            }
            n /= 2; 
        }
        
        printf("The parity of "); 
        
        for(i=i-1; i >= 0; --i)
        {
            printf("%d", a[i]);
        }
        
        
        printf(" is %d (mod 2).\n", count);
        
    }
    return 0;
}
