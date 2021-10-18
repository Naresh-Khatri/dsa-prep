#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    int larger = max(a, b), smaller = min(a, b);
    while (larger > 0 && smaller > 0)
    {
        if (smaller > larger)
        {
            int temp = smaller;
            smaller = larger;
            larger = temp;
        }
        larger = larger % smaller;
        // cout << larger << " " << smaller << "\n";
    }
    return smaller;
}
int main()
{
    int a = 4227;
    int b = 23452;

    cout << gcd(a, b);

    return 0;
}