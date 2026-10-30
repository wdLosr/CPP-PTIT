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

        vector<int> a;

        int res = 0;

        for (int i = 0; i < s.size(); ++i)
        {
            if (isdigit(s[i]))
            {
                res = res * 10 + (s[i] - '0');
            }
            else
            {
                a.push_back(res);
                res = 0;
            }
        }

        sort(a.begin(), a.end(), greater<int>());

        cout << a[0] << endl;
    }
}