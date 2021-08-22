#include <bits/stdc++.h>
using namespace std;

int main()
{
    double i, n1, n2;
    
    while(1)
    {
        cin >> n1 >> n2;
        if (n1 == 0 && n2 == 0)
            break;
        
        int count = 0;
        
        for(i=n1; i <= n2; ++i)
        {
            if (sqrt(i) == floor(sqrt(i)))
                ++count;
        }
        
        cout << count << endl;

    }
    
    return 0;
}
