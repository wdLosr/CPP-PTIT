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
    while (t--)
    {
        string s;
        cin >> s;
        int cnt[256] = {0};
        int n = s.size();
        for (int i = 0; i < n; ++i)
        {
            cnt[s[i]]++;
        }
        for (int i = 0; i < n; ++i)
        {
            if (cnt[s[i]] == 1)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
}