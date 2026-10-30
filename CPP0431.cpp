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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &x : a)
        {
            cin >> x;
        }

        sort(a.begin(), a.end());

        int pos = 0;
        ll ans = 0;

        for (int i = 0; i < n; ++i)
        {
            while (pos < n && a[pos] - a[i] < k)
            {
                pos++;
            }

            int tmp = pos - i - 1;
            if (tmp > 0)
                ans += 1LL * tmp;
        }

        cout << ans << endl;
    }
}