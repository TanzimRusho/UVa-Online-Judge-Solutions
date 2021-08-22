// online judge - 11462
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n, i, a[2000005];
    
    while(scanf("%ld\n", &n)) 
    {
        if (!n) break;
        for(i = 0; i < n; ++i)
        {
            scanf("%ld ", &a[i]);
        }
        
        sort(a, a+n);
        
        for(i = 0; i < n; ++i)
        {
            printf("%ld", a[i]);
            if (i < n-1)
                printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}
