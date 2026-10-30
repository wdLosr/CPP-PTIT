// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int cnt[1000005] = {0};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 5);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (cnt[a[i]] > 1)
            {
                ans += cnt[a[i]];
                cnt[a[i]] = 0;
            }
            cnt[a[i]] = 0;
        }
        cout << ans << endl;
    }
}