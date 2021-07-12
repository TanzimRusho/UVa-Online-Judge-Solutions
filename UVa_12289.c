// online judge - 12289 (in C)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int T, i, text_diff1, text_diff2; 
    char ch, text[10];
    char *one = "one";
    char *two = "two";
    
    scanf("%d\n", &T);
    
    for (i=0; i<T; ++i)
    {
        scanf("%s\n", text);

        int limit = strlen(text); 
        
        if (limit == 5)
            printf("%d\n", 3);
        
        else 
        {
            text_diff1 = 0;
            text_diff2 = 0;
            
            for (ch = 0; ch < limit; ++ch)
            {
                text_diff1 += abs(text[ch] - one[ch]);
                text_diff2 += abs(text[ch] - two[ch]);
            }
            
            
            if (text_diff1 < text_diff2)
                printf("%d\n", 1);
            else
                printf("%d\n", 2);
    
        }    
            
    }
    return 0;
}
