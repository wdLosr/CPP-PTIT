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
        int digit = 0;
        int n = s.size();

        vector<char> se;
        
        for (int i = 0; i < n; ++i)
        {
            if (isalpha(s[i]))
            {
                se.push_back(s[i]);
            }
            else digit += s[i] - '0';
        }

        sort(se.begin(), se.end());

        string res = "";

        for (auto x : se)
        {
            res += x;
        }

        res += to_string(digit);

        cout << res << endl;
    }
}