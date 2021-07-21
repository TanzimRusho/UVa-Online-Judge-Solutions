// Longest Common Subsequence: Dynamic Programming

#include <stdio.h>
#include <string.h>

static char X[1024], Y[1024];
static int lcs[1024][1024];

int max(int a, int b)
{
    return a>b?a:b;
}


int lcs_func(char *X, char *Y, int m, int n)
{
    register int i, j;
    
    for(i = 1; i <= m; ++i) { 
        for(j = 1; j <= n; ++j)
        {
            if(X[i-1] == Y[j-1])
                lcs[i][j] = 1 + lcs[i-1][j-1];
            else
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
    
        }        
    }
    return lcs[m][n];    
}


int main()
{
   
    while(gets(X) && gets(Y))
    {    
        int m = strlen(X);
        int n = strlen(Y);
        
        printf("%d\n", lcs_func(X, Y, m, n));
    }
    return 0;
}
