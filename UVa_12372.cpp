// online judge - 12372

#include <stdio.h>

int main()
{
    int T, len, wid, hei, i;
    
    scanf("%d\n", &T);
    
    for(i=0; i<T; ++i)
    {
        scanf("%d %d %d\n", &len, &wid, &hei);
        printf("Case %d: ", i+1);
        
        if (len <= 20 && wid <= 20 && hei <= 20)
            printf("good\n");
        else
            printf("bad\n");
    }
    
    return 0;
}
