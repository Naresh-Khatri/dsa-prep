#include<iostream>

using namespace std;

int expo(int a, int b){
    if(b == 1) return a;
    return a * expo(a, b-1);
}

int main(){
    cout<<expo(5,3);
    return 0;
}