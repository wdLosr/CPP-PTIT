// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

string solve(string a, string b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int n = a.size();

    while (b.size() < n)
    {
        b = b + "0";
    }

    vector<int> c(n);

    int re = 0;

    for (int i = 0; i < n; ++i)
    {
        int x = a[i] - '0' - re;
        int y = b[i] - '0';

        if (x < y)
        {
            x += 10;
            re = 1;
        }
        else
        {
           re = 0; 
        }

        c[i] = x - y;
    }

    string res = "";

    for (int i = n - 1; i >= 0; --i)
    {
        res += to_string(c[i]);
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        string x, y;
        cin >> x >> y;

        if (x.size() < y.size())
        {
            swap(x, y);
        }
        if (x.size() == y.size())
        {
            if(x < y) swap(x, y);
        }

        string ans = solve(x, y);
        
        cout << ans << endl;
    }
}