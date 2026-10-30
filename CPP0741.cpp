// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

ll binPow(ll x, ll y, ll p)
{
    if (y == 0) return 1;
    ll res = binPow(x, y / 2, p);
    (res *= res) %= p;
    if (y & 1) (res *= x) %= p;
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll x, y, p;
        cin >> x >> y >> p;
        cout << binPow(x, y, p) << endl;
    }
}