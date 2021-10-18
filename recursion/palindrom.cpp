#include <iostream>
#include <string.h>

using namespace std;

bool palindrom(string str)
{
    if (str.length() <= 1) return true;
    if (str[0] != str[str.length() - 1]) return false;

    palindrom(str.substr(1, str.length() - 2));
}

int main()
{
    bool val = palindrom("okako");
    printf("%d",val);
    return 0;
}