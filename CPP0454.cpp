// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"
#define sz size
#define all(a) a.begin(), a.end()
#define MOD 1000000007

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
        int n; cin >> n;
        vector<int> a(n);

        for (auto &x : a) cin >> x;

        sort(all(a));

        vector<ll> v;

        for (auto &x : a)
        {
            v.pb(1LL * x * x);
        }

        int check = 0;

        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i; j < n; ++j)
            {
                if (binary_search(all(v), v[i] + v[j]))
                {
                    check = 1;
                    break;
                }
            }
            if (check) break;
        }

        if (check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}