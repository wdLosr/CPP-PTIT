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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5][n + 5];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> a[i][j];
            }
        }
        int dem[100005] = {0}, cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (dem[a[i][j]] == i)
                {
                    dem[a[i][j]]++;
                }
                if (dem[a[i][j]] == n)
                {
                    cnt++;
                    dem[a[i][j]] = 0;
                }
            }
        }
        cout << cnt << endl;
    }
}