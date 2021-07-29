#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    int i;
    bool flag = true;
    
    for(i=2; i <= (int)sqrt(n); ++i)
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


int digit_primes(int array[], int elem)
{
    int i, count=0, sum;
    
    for(i=0; i < elem; ++i)
    {
        // let's determine whether array[i] is digit_prime or not
        sum = 0;
        cout << array[i] << " ";
        while(array[i] > 0)
        {
            int digit = array[i]%10;
            sum += digit;
            array[i] /= 10;
        }
        
        if (is_prime(sum))
            ++count;
    }
    
    return count;
}

int Sieve(int n, int m)
{
    bool prime[n+1];
    //cout << "here\n";
    //printf("%d %d\n", n, m);
    int array[n];
    memset(prime, true, sizeof(prime));

    for(int p=2; p*p <= n; p++)
    {
        if(prime[p] == true)
        {
            for(int i=p*p; i<=n; i+=p)
                prime[i] = false;
            
        }
    }
    
    for(int f=m; f <= n; f++)
    {
        cout << prime[f] << " ";
    }
    
    
    int elem = 0;
    
    for(int p=m; p<=n; p++)
        if(prime[p]==true)
            array[elem++] = p;
     
    //cout << elem << endl;        
    for(int k=0; k < elem; ++k)
        printf("%d ", array[k]);
            
    return digit_primes(array, elem);
}

int main()
{
    int n, t, n1, n2, res;
    
    scanf("%d", &t);
    
    while(t--)
    {   
        scanf("%d%d", &n1, &n2);
        //cout << n1 << n2;
        res = Sieve(n1, n2);    
        
        printf("%d\n", res);
    }    
    return 0;
}
