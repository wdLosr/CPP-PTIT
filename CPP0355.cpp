// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

void chuanHoa(string &s)
{
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); ++i)
    {
        if (isalpha(s[i]))
        {
            s[i] = tolower(s[i]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        string s;
        string ans;
        vector<string> v;

        while (cin >> s)
        {
            ans += s;
            ans += ' ';
            int idx = ans.size() - 2;

            if (ans[idx] == '.' || ans[idx] == '?' || ans[idx] == '!')
            {
                ans.erase(idx, 2);
                chuanHoa(ans);
                v.push_back(ans);
                ans = "";
            }
        }

        for (auto &s : v) cout << s << endl;
    }
}