// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1000000007
using namespace std;

ll pOW(int x, int n)
{
    ll res = 1;
    for (int i = 0; i < n; ++i)
    {
        res *= (ll)x % mod;
        res %= mod;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n + 5];
        int res = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            res += (1LL * a[i] * pOW(x, n - i - 1)) % mod;
            res %= mod;
        }
        cout << res << endl;
    }
}