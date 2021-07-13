// Run time: 0.480s

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    
    while(1)
    {
        cin >> n;
        if(n == 0)
            break;
        
        long factors[100];
        long i=0;
        cout << n << " = ";
        
        
        if(n < 0)
        {
            factors[i++] = -1;
            n *= -1;
        }
            
        while(n%2 == 0)
        {
            factors[i++] = 2;
            n /= 2;
        }
        
        
        for (long j=3; j <= (int)sqrt((double)n); ++j)
        {
            while(n%j == 0)
            {
                //factors.append(i);
                factors[i++] = j;
                n /= j;
            }
        }        
        
        if(n > 2)
            factors[i++] = n;
        
        //--i;
        for(long k = 0; k < i; ++k)
        {    
            if (k == i-1) 
                cout << factors[k];
            else
                cout << factors[k] << " x ";
        }    
        printf("\n");
    }
    
    return 0;   
}


