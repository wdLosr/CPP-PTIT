// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (auto &x : a)
        {
            cin >> x;
        }

        vector<ll> v(n, 0);

        v[0] = 1LL * a[0] * a[1];
        v[n - 1] = 1LL * a[n - 2] * a[n - 1];

        for (int i = 1; i < n - 1; ++i)
        {
            v[i] = 1LL * a[i - 1] * a[i + 1];
        }

        for (auto x : v) cout << x << ' ';

        cout << endl;
    }
}