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

        int cnt = 0;
        for (auto &x : a)
        {
            cin >> x;
            if (x <= k) cnt++;
        }
        
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + (a[i] > k ? 1 : 0);
        }

        int ans = n + 5;

        for (int i = 0; i <= n - cnt; i++)
        {
            int tmp = prefix[i + cnt] - prefix[i];
            ans = min(ans, tmp);
        }

        cout << ans << endl;
    }
    return 0;
}