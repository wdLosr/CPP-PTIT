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
        int n; cin >> n;
        vector<int> a(n);

        for (auto &it : a) cin >> it;

        int k, x;
        cin >> k >> x;

        int pos = lower_bound(a.begin(), a.end(), x) - a.begin();
        int l, r;

        if (a[pos] == x)
        {
            l = pos - 1;
            r = pos + 1;
        }
        else
        {
            l = pos - 1;
            r = pos;
        }

        for (int i = k / 2 - 1; i >= 0; --i) cout << a[l - i] << ' ';

        for (int i = 0; i < k / 2; ++i) cout << a[r + i] << ' ';

        cout << endl;
    }
}