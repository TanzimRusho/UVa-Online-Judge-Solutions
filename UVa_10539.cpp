#include <bits/stdc++.h>
using namespace std;

bool almost_primes(long long array[], long long elem, long long n)
{
    long long i, count=0;
    bool flag;
    //bool flag = false;
    
    for(i=0; i < elem; ++i)
    {
        if (n%array[i] == 0)
        {
            //flag = true;
            //break;
            ++count;
        }
    }
    //cout << count << " ";
    if (count == 1)
        flag = true;
    else
        flag = false;
    
    return flag;
}

bool SieveOfEratosthenes(long long n)
{
    bool prime[n+1];
    long long array[n];
    memset(prime, true, sizeof(prime));

    for(long long p=2; p*p <= n; p++)
    {
        if(prime[p] == true)
        {
            for(long long i=p*p; i<=n; i+=p)
                prime[i] = false;
            
        }
    }
    
    long long elem = 0;
    
    for(long long p=2; p<=n; p++)
        if(prime[p])
            array[elem++] = p;
            
    return almost_primes(array, elem, n);
    
}

bool is_prime(long long n)
{
    long long i;
    bool flag = true;
    
    for(i=2; i <= (long long)sqrt(n); ++i)
    {
        if (n%i == 0) 
        {
            flag = false;
            break;
        }        
    }
    //cout << "here " << flag << " ";
    return flag;
}

int main()
{
    long long n, t, n1, n2;
    
    cin >> t;
    
    while(t--)
    {   
        cin >> n1 >> n2;
        
        long long count = 0;
            
        for(long long i=n1; i<=n2; ++i)
        {
            if (is_prime(i) == true)
                continue;
            
            if (is_prime(i) == false && SieveOfEratosthenes(i) == true)
            {
                ++count;
            }
        }   
        
        cout << count << endl;
    }    
    return 0;
}
