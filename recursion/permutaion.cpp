#include <iostream>
#include <string.h>

using namespace std;

void swap(char *a, char *b)
{
    // cout<<"swap: "<<*a<<" with "<<*b<<endl;
    char temp = *a;
    *a = *b;
    *b = temp;
}
void permutation(string str, int index)
{
    if (index == str.length())
    {
        cout << str << endl;
        return;
    }
    for (int i = index; i < str.length(); i++)
    {
        // cout<<index<<" "<<i<<endl;
        // cout<<str<<endl;
        swap(&str[index], &str[i]);
        // cout<<"before: "<<str<<endl;

        permutation(str, index + 1);

        swap(&str[index], &str[i]);
        // cout<<"after: "<<str<<endl;
    }
}

int main()
{
    permutation("abc", 0);
    return 0;
}