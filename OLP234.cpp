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
        string s;
        cin >> n >> s;

        ll ans = 0;
        int cnt = 1;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                cnt++;
            }
            else
            {
                ans += 1LL * cnt * (cnt - 1) / 2;
                cnt = 1;
            }
        }

        ans += 1LL * cnt * (cnt - 1) / 2;

        cout << ans << endl;
    }
}