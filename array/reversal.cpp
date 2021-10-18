#include <stdio.h>
#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

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
    for(int i=0; i<n/2; i++){
        swap(&arr[i],&arr[n-i-1]);
    }
    display(arr, n);
    return 0;
}