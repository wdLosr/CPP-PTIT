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
        int n, m;
        cin >> n >> m;
        int a[105][105];
        int b[105][105] = {0};
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (a[i][j] == 1)
                {
                    for (int k = 0; k < n; ++k)
                    {
                        for (int q = 0; q < m; ++q)
                        {
                            if (k == i || q == j)
                            {
                                b[k][q] = 1;
                            }
                        }
                    }
                }
            }
        }
        for (int k = 0; k < n; ++k)
        {
            for (int q = 0; q < m; ++q)
            {
                cout << b[k][q] << " ";
            }
            cout << endl;
        }
    }
}