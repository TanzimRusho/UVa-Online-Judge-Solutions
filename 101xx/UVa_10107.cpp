// online judge - 10107

#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(long double x)
{
    long long square_root = sqrt(x);
    
    return (square_root * square_root == x);
}

int main()
{
    long double number;
    
    while(1){
        
        cin >> number;
        
        if (number == 0)
            break;
        
        if (isPerfectSquare(number) == true)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }    
    return 0;
}
