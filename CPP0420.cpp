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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);

        vector<pair<int, int>> v(n);

        for (auto &x : a)
        {
            cin >> x;
        }

        for (int i = 0; i < n; ++i)
        {
            v[i].fi = abs(x - a[i]);
            v[i].se = i;
        }

        sort(v.begin(), v.end());

        for (auto x : v)
        {
            cout << a[x.se] << ' ';
        }

        cout << endl;
    }
}