#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int x = n + (a + b + c);
        int maxi=max({a,b,c});
        if (x % 3 == 0 && maxi<=x/3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}