// online judge - 10921

#include <stdio.h>

int main()
{
    char ch;
    
    while((ch = getchar())!=EOF)
    {
        if ('0' <= ch && ch <= '9')
            putchar(ch);
        else if (ch == '-')
            putchar(ch);
        else if (ch == '\n')
            putchar(ch);
        else {
            switch(ch)
            {
                case 'A':
                case 'B':
                case 'C':
                    printf("%d", 2);
                    break;
                case 'D':
                case 'E':
                case 'F':
                    printf("%d", 3);
                    break;
                case 'G':
                case 'H':
                case 'I':
                    printf("%d", 4);
                    break;
                case 'J':
                case 'K':
                case 'L':
                    printf("%d", 5);
                    break;
                case 'M':
                case 'N':
                case 'O':
                    printf("%d", 6);
                    break;
                case 'P':
                case 'Q':
                case 'R':
                case 'S':
                    printf("%d", 7);
                    break;
                case 'T':
                case 'U':
                case 'V':
                    printf("%d", 8);
                    break;
                case 'W':
                case 'X':
                case 'Y':
                case 'Z':
                    printf("%d", 9);
                    
            }
  
        }        
    }

    return 0;
}
