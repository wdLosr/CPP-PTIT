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
        string a;
        cin >> a;
        int ok = 1;
        for (int i = 1; i < a.size(); ++i)
        {
            if (abs((a[i] - '0') - (a[i - 1] - '0')) != 1)
            {
                ok = 0;
                break;
            }
        }
        if (ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}