#include <stdio.h>
#include <iostream>
using namespace std;

void display(int arr[], int n){
    cout<<"\n[";
    for(int i=0; i<n; i++)
        printf("%d, ", arr[i]);
    cout<<"]";
    
}
int main() {
    int arr[10];
    int n;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        printf("Enter %d value: ", i);
        scanf("%d", &arr[i]);
    }
    
    display(arr, n);
    int min = arr[0];
    int max = arr[0];

    for(int i=0;i<n; i++)
    {
        if(min>arr[i])
            min = arr[i];
        if(max<arr[i])
            max = arr[i];
    }
    cout<<"\nMax = "<<max<<endl<<"Min = "<<min;
    return 0;
}