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

        int d = -1;

        for (int i = n - 1; i >= 1; --i)
        {
            if (s[i] < s[i - 1])
            {
                d = i - 1;
                break;
            }
        }

        if (d == -1)
        {
            cout << d << endl;
        }

        else
        {
            for (int i = n - 1; i >= d; --i)
            {
                if (s[i] < s[d])
                {
                    while (s[i] == s[i - 1])
                    {
                        --i;
                    }
                    swap(s[i], s[d]);
                    break;
                }
            }

            cout << s << endl;
        }
    }
}