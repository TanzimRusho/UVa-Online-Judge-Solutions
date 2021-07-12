// online judge - 10079
// In C++

#include <iostream>
using namespace std;

int main()
{
    long long n, max;
    
    while(1)
    {
        cin >> n;
        if (n < 0)
            break;
        
        max = (n*n + n + 2)/2;
        
        cout << max << endl;
    }
    
    return 0;
}
