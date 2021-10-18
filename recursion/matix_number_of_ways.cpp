#include<iostream>

using namespace std;

int ways(int m, int n){
    if(m == 1 || n == 1)
        return 1;
    return ways(m-1,n) + ways(m,n-1);
}

int main(){
    cout<<ways(5,3);
    return 0;
}