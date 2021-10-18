#include <iostream>
#include <string.h>

using namespace std;

void permutation(string str, int i, string curr){
    if (i == str.length()){
        cout << curr << endl;
        return;
    }
    permutation(str, i+1, curr);

    
}

int main()
{
    permutation("abc", 0, "");

    return 0;
}