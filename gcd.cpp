#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    return a == 0 ? b : gcd(b % a, a);
}
int main()
{
    int a = 12;
    int b = 46;

    cout << gcd(a, b);

    return 0;
}