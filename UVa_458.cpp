#include <iostream>
using namespace std;

int main()
{
    char ch;
    
    while((ch=getchar())!=EOF)
    {
        if (ch == '\n')
            putchar(ch);
        else
        {
            ch = ch - 7;
            putchar(ch);
        }
    }
    return 0;
}
