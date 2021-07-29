#include <bits/stdc++.h>
using namespace std;

int num;

void four_primes(int array[], int elem, int n)
{
    int i, j, k, l, flag=0;
    
    for(i=0; i < elem; ++i)
        for(j=0; j < elem; ++j)
            for(k=0; k < elem; ++k)
                for(l=0; l < elem; ++l)
                {
                    if(array[i] + array[j] + array[k] + array[l] == n)
                    {
                        flag = 1;
                        goto label;
                    }
                }
    if(!flag)
        printf("Impossible.\n");
    label:
    printf("%d %d %d %d\n", array[i],array[j],array[k],array[l]);
}

void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
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
    
    int elem = 0;
    
    for(int p=2; p<=n; p++)
        if(prime[p])
            //cout << p << " ";
            array[elem++] = p;
            
    four_primes(array, elem, n);
}

int main()
{
    int num;
    
    while(scanf("%d", &num)!=EOF)
    {   
        SieveOfEratosthenes(num);
    }    
    return 0;
}
