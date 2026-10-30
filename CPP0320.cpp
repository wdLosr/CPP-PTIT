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
        string s;
        cin >> s;
        int cnt[10] = {0};

        int n = s.size();

        int ok = 1;

        for (int i = 0; i < n; ++i)
        {
            if (isdigit(s[i]) && s[0] != '0')
            {
                cnt[s[i] - '0']++;
            }
            else
            {
                cout << "INVALID" << endl;
                ok = 0;
                break;
            }
        }

        if (ok)
        {
            int res = 0;

            for (int i = 0; i <= 9; ++i)
            {
                if (cnt[i] != 0)
                {
                    res++;
                }
            }

            if (res == 10)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}