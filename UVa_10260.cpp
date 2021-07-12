// online judge - 10260

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //char ch;
    string line;
    
    
    while(getline(cin, line))
    {
        for(int i=0; i < line.length(); i++)
        {
            switch(line[i])
            {
                case 'B':
                case 'F': 
                case 'P': 
                case 'V':
                    if (line[i-1] == 'B' || line[i-1] == 'F' || line[i-1] == 'P' || line[i-1] == 'V')
                        printf("");
                    else
                        printf("%d", 1);
                    break;
                case 'C': 
                case 'G': 
                case 'J': 
                case 'K': 
                case 'Q': 
                case 'S': 
                case 'X': 
                case 'Z':
                    if (line[i-1] == 'C' || line[i-1] == 'G' || line[i-1] == 'J' || line[i-1] == 'K'
                    || line[i-1] == 'Q' || line[i-1] == 'S' || line[i-1] == 'X' || line[i-1] == 'Z')
                        printf("");
                    else
                        printf("%d", 2);
                    break;
                case 'D':
                case 'T':
                    if (line[i-1] == 'D' || line[i-1] == 'T')
                        printf("");
                    else
                        printf("%d", 3);
                    break;
                case 'L':
                    if (line[i-1] == 'L')
                        printf("");
                    else
                        printf("%d", 4);
                    break;
                case 'M':
                case 'N':
                    if(line[i-1] == 'M' || line[i-1] == 'N')
                        printf("");
                    else
                        printf("%d", 5);
                    break;
                case 'R':
                    if (line[i-1] == 'R')
                        printf("");
                    else
                        printf("%d", 6);
                    //break;
                    
            }
            
        }
        cout << endl;
    }
    return 0;
}
