#include <iostream>
using namespace std;

int len[101][101];

int max(int a, int b)
{
    return (a>=b)?a:b;
}

int lcs(int X[], int Y[], int m, int n)
{
    //cout << "Here\n";
    int i, j;
    
    for(i=1; i<=m; ++i)
        len[i][0] = 0;
    for(j=1; j<=n; ++j)
        len[0][j] = 0;
        
    len[0][0] = 0;
    
    for(i=1; i<=m; ++i)
    {
        for(j=1; j<=n; ++j)
        {
            if(X[i-1]==Y[j-1])
            {
                len[i][j] = len[i-1][j-1] + 1;
            }
            else
            {
                len[i][j] = max(len[i-1][j], len[i][j-1]);
            }
        }
    }    
    return len[m][n];
}

int main()
{
    int count = 0;
    int m, n;
    int X[101], Y[101];
    while(1)
    {
        cin >> m >> n;
        if (m == 0 && n == 0)
            break;
            
        ++count;
        
        for(int i=0; i < m; ++i)
            cin >> X[i];
        for(int j=0; j < n; ++j)
            cin >> Y[j];
        
        printf("Twin Towers #%d\n", count);
        printf("Number of Tiles : %d\n", lcs(X, Y, m, n));
        cout << endl;
    }
    
    return 0;
}
