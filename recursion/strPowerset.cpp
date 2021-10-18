#include <iostream>
#include <string.h>

using namespace std;

void powerset(string str, int i, string curr){
    if (i == str.length()){
        cout << curr << "\n";
        return;
    }
    powerset(str, i + 1, curr + str[i]);
    powerset(str, i + 1, curr);
}

int main()
{
    powerset("abc", 0, "");
    return 0;
}