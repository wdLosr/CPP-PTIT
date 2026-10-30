// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll stn(ll n)
{
    ll m = 0;
    while (n != 0)
    {
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == stn(n))
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }
}