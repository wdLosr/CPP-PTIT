// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

ll moD(string a, ll m)
{
    ll res = 0;

    for (auto &x : a)
    {
        res = (res * 10 + (x - '0')) % m;
    }

    return res;
}

ll binPow(ll a, ll b, ll m)
{
    if(b == 0) return 1;
    ll x = binPow(a, b/2, m);
    (x *= x) %= m;
    if(b & 1) (x *= a) %= m;
    return x;
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
        string a;
        ll b, m;

        cin >> a >> b >> m;

        ll res = moD(a, m);

        cout << binPow(res, b, m) << endl;
    }
}