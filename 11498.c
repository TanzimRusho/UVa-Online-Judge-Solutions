// online judge: 11498 (in C)

#include <stdio.h>

int main()
{
    int K, n, m, x, y;
    
    while(1)    
    {   
        scanf("%d\n", &K);
        if (!K)
            break;
        else
        {
            scanf("%d %d\n", &n, &m);
            while(K--) 
            {
                scanf("%d %d\n", &x, &y);
                if (x == n || y == m)
                    printf("divisa\n");
                else if (x > n && y > m)
                    printf("NE\n");
                else if (x < n && y > m)
                    printf("NO\n");
                else if (x < n && y < m)
                    printf("SO\n");
                //else if (x > n && y < m)
                else
                    printf("SE\n");
            }
        }
    }
    return 0;
    
}
