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
    while (t--)
    {
        string s;
        cin >> s;
        s += " ";
        int sum = 0;
        int tmp = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (isdigit(s[i]))
            {
                tmp = tmp * 10 + (s[i] - '0');
            }
            else
            {
                sum += tmp;
                tmp = 0;
            }
        }
        cout << sum << endl;
    }
}