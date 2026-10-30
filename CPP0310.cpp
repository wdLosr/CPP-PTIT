// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

ll sonho(string x1, string x2, int l1, int l2)
{
    for (int i = 0; i < l1; ++i)
    {
        if (x1[i] == '6')
        {
            x1[i] = '5';
        }
    }

    for (int i = 0; i < l2; ++i)
    {
        if (x2[i] == '6')
        {
            x2[i] = '5';
        }
    }

    ll a = stoll(x1), b = stoll(x2);
    return a + b;
}

ll solon(string x1, string x2, int l1, int l2)
{
    for (int i = 0; i < l1; ++i)
    {
        if (x1[i] == '5')
        {
            x1[i] = '6';
        }
    }

    for (int i = 0; i < l2; ++i)
    {
        if (x2[i] == '5')
        {
            x2[i] = '6';
        }
    }

    ll a = stoll(x1), b = stoll(x2);
    return a + b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string x1, x2;
        cin >> x1 >> x2;
        
        int l1 = x1.size(), l2 = x2.size();

        cout << sonho(x1, x2, l1, l2) << ' ' << solon(x1, x2, l1, l2) << endl;
    }
}