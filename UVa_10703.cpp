#include <iostream>
using namespace std;

int main()
{
    int W, H, i, j, sum, A[501][501], N, k, X1[101], X2[101], Y1[101], Y2[101];
    
    while(1)
    {
        cin >> W >> H >> N;
        if (W==0 && H == 0 && N==0)
            break;
        
        for(i=0; i < W; ++i)
            for(j=0; j < H; ++j)
                A[i][j] = 0;
            
        sum = 0;
        
        for(k=0; k < N; ++k)
        {
            cin >> X1[k] >>  Y1[k] >> X2[k] >> Y2[k];
            
            int temp;
            
            if (X1[k] > X2[k])
            {
                temp = X1[k];
                X1[k] = X2[k];
                X2[k] = temp;
            }
            
            if (Y1[k] > Y2[k])
            {
                temp = Y1[k];
                Y1[k] = Y2[k];
                Y2[k] = temp;
            }

  
            for(i=X1[k]-1; i<=X2[k]-1; ++i)
            {
                for(j=Y1[k]-1; j<=Y2[k]-1; ++j)
                {
                    if(A[i][j] != 1)
                    {
                        A[i][j] = 1;
                        sum += 1;
                    }    
                }
            }        
        }
        
        if (sum == W * H)
            cout << "There is no empty spots." << endl;
        else if (W*H - sum == 1)
            cout << "There is one empty spot." << endl;
        else
            cout << "There are " << W*H - sum << " empty spots." << endl;
    }
    
    return 0;
}
