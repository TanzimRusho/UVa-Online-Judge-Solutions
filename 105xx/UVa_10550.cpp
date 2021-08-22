// online judge - 10550

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int init, dial1, dial2, dial3, rot1, rot2, rot3, angle;
    
    while(1)
    {
        scanf("%d %d %d %d\n", &init, &dial1, &dial2, &dial3);
        
        if (init == 0 && dial1 == 0 && dial2 == 0 && dial3 == 0)
            break;
        
        if (dial1 > init)
            rot1 = 40 - abs(dial1 - init);
        else
            rot1 = abs(dial1 - init);
          
        if (dial2 < dial1)
            rot2 = 40 - abs(dial2 - dial1);
        else
            rot2 = abs(dial2 - dial1); 

        if (dial3 > dial2)
            rot3 = 40 - abs(dial3 - dial2);
        else
            rot3 = abs(dial3 - dial2);
        
        angle = 1080 + (rot1 + rot2 + rot3)*9;
        
        printf("%d\n", angle);        
    }
    return 0;
    
}
