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
        int n, m, p;
        cin >> n >> m >> p;
        int a[55][55], b[55][55];
        ll c[55][55] = {0};
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < p; ++j)
            {
                cin >> b[i][j];
            }
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < p; ++j)
            {
                for (int k = 0; k < m; ++k)
                {
                    c[i][j] += (ll)a[i][k] * (ll)b[k][j];
                }
            }
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < p; ++j)
            {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
}