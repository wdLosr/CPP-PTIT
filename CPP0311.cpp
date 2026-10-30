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
        int n = s.size();

        int cnt[30] = {0};

        for (int i = 0; i < n; ++i)
        {
            cnt[s[i] - 'a']++;
        }

        int ok = 1;

        for (int i = 0; i <= 25; ++i)
        {
            if (cnt[i] > (n / 2) + (n % 2))
            {
                ok = 0;
            }
        }

        cout << ok << endl;
    }
}