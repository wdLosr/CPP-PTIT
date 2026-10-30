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
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);

        for (auto &x : a)
        {
            cin >> x;
        }

        ll sum = 0;

        sort(a.begin(), a.end(), greater<ll>());

        for (int i = 0; i < n; ++i)
        {
            sum += 1LL * a[i] * (n - 1 - i) - 1LL * a[i] * i;
        }

        cout << sum;
    }
}