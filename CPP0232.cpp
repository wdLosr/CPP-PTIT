// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"
#define sz size
#define all(a) a.begin(), a.end()
#define MOD 1000000007

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> h(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                if (i == 0) h[i][j] = 1;
                else h[i][j] = h[i - 1][j] + 1;
            }
            else h[i][j] = 0;
        }
    }

    int mx = 0;

    for (int i = 0; i < n; ++i)
    {
        vector<int> row = h[i];
        sort(all(row), greater<int>());
        for (int j = 0; j < m; ++j)
        {
            int tmp = row[j] * (j + 1);
            if (tmp > mx) mx = tmp;
        }
    }

    cout << mx << endl;
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
        solve();
    }
}