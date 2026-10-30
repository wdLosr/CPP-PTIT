// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

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
        getline(cin, s);
        int k;
        cin >> k;
        cin.ignore();
        int n = s.size();
        if (n < 26)
            cout << "0";
        else
        {
            int cnt[256] = {0};
            int d = 0;
            for (int i = 0; i < n; ++i)
            {
                cnt[s[i]]++;
            }
            for (int i = 0; i < n; ++i)
            {
                if (cnt[s[i]] != 0)
                {
                    d++;
                    cnt[s[i]] = 0;
                }
            }
            if (26 - d <= k)
            {
                cout << "1";
            }
            else
                cout << "0";
        }
        cout << endl;
    }
}