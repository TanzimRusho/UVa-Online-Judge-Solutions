// online judge - 11479
#include <stdio.h>

int main()
{
    int T, i;
    long int a, b, c;
    
    scanf("%d\n", &T);
    
    for(i=0; i<T; ++i)
    {
        scanf("%ld %ld %ld\n", &a, &b, &c);
        printf("Case %d: ", i+1);
        if (a+b <= c || b+c <= a || c+a <= b)
            printf("Invalid\n");
        else if (a == b && b == c && c==a)
            printf("Equilateral\n");
        else if (a==b || b==c || c==a)
            printf("Isosceles\n");
        else 
            printf("Scalene\n");
        
    }

    return 0;
}
