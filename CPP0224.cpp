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

int n, m, a[105][105];
int cnt = 0;
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void loang(int i, int j)
{
    a[i][j] = 0;
    for (int k = 0; k <= 7; ++k)
    {
        int i1 = i + dx[k], j1 = dy[k] + j;
        if (a[i1][j1] && i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m)
        {
            loang(i1, j1);
        }
    }
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
        cin >> n >> m;
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                if (a[i][j])
                {
                    loang(i, j);
                    ++cnt;
                }
            }
        }
        cout << cnt << endl;
    }
}