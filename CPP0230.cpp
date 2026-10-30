// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][3];
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            int d0 = 0, d1 = 0;
            for (int j = 0; j < 3; ++j)
            {
                cin >> a[i][j];
                if (a[i][j] == 1)
                    d1++;
                else
                    d0++;
            }
            if (d1 > d0)
                cnt++;
        }
        cout << cnt;
    }
}