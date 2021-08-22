// online judge - 12578

#include <stdio.h>
#include <math.h>

int main()
{
    int i, T, length;
    double pi, width, radius, area_red, area_green;
    
    scanf("%d\n", &T);
    
    for (i=0; i < T; ++i)
    {
        scanf("%d\n", &length);
        pi = acos(-1);
    
        width = (double)length * 0.6;
        
        radius = (double)length * 0.2;
        
        area_red = pi * radius * radius;
        
        area_green = length * width - area_red;
        
        printf("%.2lf %.2lf\n", area_red, area_green);
    }

    return 0;
}
