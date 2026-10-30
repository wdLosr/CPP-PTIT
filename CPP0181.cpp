// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, x, y;
        cin >> a >> x >> y;
        for (ll i = 0; i < __gcd(x, y); ++i)
        {
            cout << a;
        }
        cout << endl;
    }
}