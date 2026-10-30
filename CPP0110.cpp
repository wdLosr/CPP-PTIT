// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        int n = s.size();
        for (int i = 2; i < n; ++i)
        {
            if (s[i - 2] == '0' && s[i - 1] == '8' && s[i] == '4')
            {
                s.erase(i - 2, 3);
            }
        }
        cout << s << '\n';
    }
}