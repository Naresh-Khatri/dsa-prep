#include<iostream>

using namespace std;

void test(int* arr){
    arr[0] = 3;
}

int main(){

    int a[] = {1, 2, 3, 4, 5};
    cout<<a[0]<<endl;
    test(&a[0]);
    cout<<a[0]<<endl;

    return 0;
}