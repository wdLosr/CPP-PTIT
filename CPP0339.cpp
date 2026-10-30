// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int d[256] = {0};
        int ans = n;
        for (int i = 0; i < n; ++i)
        {
            d[s[i]]++;
        }
        for (int i = 0; i < n; ++i)
        {
            if (d[s[i]] > 1)
            {
                ans += ((d[s[i]]) * (d[s[i]] - 1)) / 2;
                d[s[i]] = 0;
            }
        }
        cout << ans << endl;
    }
}