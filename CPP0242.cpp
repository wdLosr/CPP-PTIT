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
        vector<int> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        int ans = 0;

        for (int l = 0; l < n; ++l)
        {
            int sA = a[l], sB = b[l];
            for (int r = l; r < n; ++r)
            {
                if (r != l)
                {
                    if (a[r]) sA += a[r];
                    if (b[r]) sB += b[r];
                }
                if (sA == sB)
                {
                    ans = max(r - l + 1, ans);
                }
            }
        }
        cout << ans << endl;
    }
}