#include<iostream>
#include<math.h>

using namespace std;

void display(bool arr[], int n){
    cout<<"-----------\n";
    for(int i=0; i<n; i++){
        cout<<i<<". "<<arr[i]<<"\n";
    }
    cout<<"-----------\n";
}
int main(){

    int n = 100;
    bool arr[n];

    for(int i=0; i<n; i++){
        arr[i] = true;
    }
    for(int i=2;  i<pow(n,0.5); i++){
        for(int j=i*2; j<n; j+=i){
            arr[j] = false;
        }
    }
    display(arr, n);
    return 0;
}