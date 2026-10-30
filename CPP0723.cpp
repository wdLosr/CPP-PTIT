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
        int n;
        cin >> n;
        string a;
        cin >> a;
        string res = "";
        for (auto &c : a)
        {
            switch (c)
            {
            case '2': case '3': case '5': case '7': res += c;
                break;
            case '4':
                res += "223";
                break;
            case '6':
                res += "53";
                break;
            case '8':
                res += "7222";
                break;
            case '9':
                res += "7332";
                break;
            }
        }
        sort(res.begin(), res.end(), greater<char>());
        cout << res << endl;
    }
}