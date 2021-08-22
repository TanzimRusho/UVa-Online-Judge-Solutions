// online judge - 10327

#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    double a, b, c;
    
    while(scanf("%lf%lf%lf\n", &a, &b, &c)!=EOF)
    {
        double s = 0.5*(a+b+c);
        double area = s*(s-a)*(s-b)*(s-c);
        
        if (area <= 0)
        {
            printf("-1.000\n");
            continue;
        }
        else 
        {
            area = (4.0/3.0)*sqrt(area);
            printf("%.3lf\n", area);
        }
    }
    
    return 0;
}
