#include <iostream>
using namespace std;

long long int bigmod(long long int B, long long int P, long long int M)
{
    if(P==0) return 1;
    else if (P%2) return ((B%M) * bigmod(B, P-1, M))%M;
    else {
        long long int d = bigmod(B, P/2, M);
        return ((d%M)*(d%M))%M;
    }
}

int main()
{
    long long int B, P, M, result, c;
    
    cin >> c;
    
    while(scanf("%lld %lld %lld\n", &B, &P, &M)==3)
    {
        result = bigmod(B, P, M);
        cout << result << endl;
    }
    
    return 0;
}
