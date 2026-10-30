// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // Tim min va max cau so co m chu so sao cho tong cua no bang s

    int m, s, ok = 0;
    cin >> m >> s;
    if (m * 9 < s || (s == 0 && m > 1))
    {
        cout << "-1 -1";
    }
    else
    {
        // Tim max
        string mx;
        while (s > 9)
        {
            mx += '9';
            s -= 9;
        }
        mx += to_string(s);
        while (m - mx.size() > 0)
        {
            mx += '0';
            ok = 1; // Danh dau de xu li phan tim min
        }

        // Tim min
        string mn;
        for (int i = m - 1; i >= 0; --i)
        {
            mn += mx[i];
        }
        if (ok)
        {
            mn[0] += 1;
            for (int i = 1; i < mn.size(); ++i)
            {
                if (mn[i] != '0')
                {
                    mn[i] -= 1;
                    break;
                }
            }
        }

        // In ket qua
        cout << mn << " " << mx;
    }
}