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
        int n, k, b;
        cin >> n >> k >> b;

        vector<int> a(n + 1, 1);

        for (int i = 1; i <= b; ++i)
        {
            int x;
            cin >> x;
            a[x] = 0;
        }

        int res = 0;

        for (int i = 1; i <= k; ++i)
        {
            if (a[i]) res++;
        }

        int ans = res;

        for (int i = k + 1; i <= n; ++i)
        {
            if (a[i]) res++;
            if (a[i - k]) res--;
            ans = max(res, ans);
        }

        cout << k - ans << endl;
    }
}