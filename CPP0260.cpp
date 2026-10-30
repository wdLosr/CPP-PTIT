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
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n * n);
        for (auto &x : a)
        {
            cin >> x;
        }

        sort(a.begin(), a.end());

        int m = 0, h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
        int r[25][25];

        while (h1 <= h2 && c1 <= c2)
        {
            for (int i = c1; i <= c2; ++i)
            {
                r[h1][i] = a[m];
                ++m;
            }

            h1++;

            for (int i = h1; i <= h2; ++i)
            {
                r[i][c2] = a[m];
                ++m;
            }

            c2--;

            for (int i = c2; i >= c1; --i)
            {
                r[h2][i] = a[m];
                ++m;
            }

            h2--;

            for (int i = h2; i >= h1; --i)
            {
                r[i][c1] = a[m];
                ++m;
            }

            c1++;
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << r[i][j] << ' ';
            }
            cout << endl;
        }
    }
}