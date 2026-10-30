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
        char c[10];
        cin >> c;
        int cnt = 0;
        int n = strlen(c);
        for (int i = 0; i < n; ++i)
        {
            if (c[i] == '0' || c[i] == '6' || c[i] == '8')
            {
                cnt++;
            }
        }
        if (cnt == n)
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }
}