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
        getline(cin, s);
        int n = s.size();
        string ss;
        int ok = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            int tmp = (int)s[i];
            if (tmp % 2 != 0)
            {
                cout << "NO";
                ok = 1;
                break;
            }
            if (ok)
                break;
            else
            {
                ss += s[i];
            }
        }
        if (!ok)
        {
            if (ss == s)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
    }
}