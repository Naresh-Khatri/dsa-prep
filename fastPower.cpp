#include <iostream>
#include <math.h>

using namespace std;

int fastPower(int a, int b)
{   int res = 1;
    while(b>0){
        if(b % 2 ==1){
            res *= a;
        }
        a *= a;
        b /=2;
    // cout<<res<<" "<<b<<"\n";
    }
    return res;
}

int main()
{   
    cout<<fastPower(3,9);

    return 0;
}