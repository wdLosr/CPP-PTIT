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
        cin >> s;
        int n = s.size();
        ll ans = 0;
        for (int i = 0; i < n; ++i)
        {
            ans = ans * 2 + (s[i] - '0');
            ans %= 5;
        }
        if (ans == 0)
        {
            cout << "Yes";
        }
        else
            cout << "No";
        cout << endl;
    }
}