// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, m;
        cin >> a >> m;
        int ok = 0;
        for (int i = 0; i < m; ++i)
        {
            if ((a * i) % m == 1)
            {
                ok = 1;
                cout << i;
                break;
            }
            if (ok)
                break;
        }
        if (!ok)
            cout << "-1";
        cout << endl;
    }
}