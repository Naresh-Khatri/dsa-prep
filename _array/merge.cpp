#include <iostream>

using namespace std;

int main(){
    
    int arr1[] = {1,2,4};
    int arr2[] = {1,3,4};
    int res[6];

    for(int i=0, j=0, resind=0; i<3 && j<3; resind++)
    {
        if(arr1[i] >= arr2[j]){
            res[resind] = arr1[i];
            i++;
        }
        else{
            res[resind] = arr2[j];
            j++;
        }
    }
    for(int i=0; i<6; i++)
        cout<<res[i]<<endl;

    return 0;
}