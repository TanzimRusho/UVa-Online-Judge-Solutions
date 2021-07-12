// online judge - 10879

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, K, N1, N2, i, j;
    
    cin>>N;
    
    for(i=0; i<N; ++i)
    {
        cin >> K;
        
        N1 = N2 = 0;
        
        for(j=2; j<=sqrt(K); ++j)
        {
            if (j*(K/j)==K) {
                N1 = j;
                break;
        
            }
        }
        
        for(j=N1+1; j<=sqrt(K); ++j)
        {
            if ((j*(K/j)==K) && (j!=(K/N1))) {
                N2 = j;
                break;
        
            }
        }
        
        cout << "Case #" << i+1 <<": " << K << " = " << N1 << " * " << K/N1 
        << " = " << N2 << " * " << K/N2 << endl;
    }
    
    
    return 0;
}
