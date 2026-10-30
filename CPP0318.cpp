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
        string bs;
        cin >> bs;
        string s = "";
        for (char c : bs)
        {
            if (isdigit(c)) s += c;
        }
        s = s.substr(s.size() - 5);

        for (int i = 0; i < 6; ++i)
        {
            if (s[i] == '.')
            {
                s.erase(i, 1);
            }
        }

        if (s[0] < s[1] && s[1] < s[2] && s[2] < s[3] && s[3] < s[4])
        {
            cout << "YES";
        }
        else if (s[0] == s[1] && s[1] == s[2] && s[2] == s[3] && s[3] == s[4])
        {
            cout << "YES";
        }
        else if ((s[2] != s[3]) && (s[0] == s[1] && s[1] == s[2]) && (s[3] == s[4]))
        {
            cout << "YES";
        }
        else if ((s[0] == '6' || s[0] == '8') && (s[1] == '6' || s[1] == '8') && (s[2] == '6' || s[2] == '8') && (s[3] == '6' || s[3] == '8') && (s[4] == '6' || s[4] == '8'))
        {
            cout << "YES";
        }
        else
            cout << "NO";

        cout << endl;
    }
}