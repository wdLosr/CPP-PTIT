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
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5][n + 5];
        int mx = -1;
        int tmp = 0;
        for (int i = 0; i < n; ++i)
        {
            int sum = 0;
            for (int j = 0; j < n; ++j)
            {
                cin >> a[i][j];
                sum += a[i][j];
            }
            tmp += sum;
            mx = max(mx, sum);
        }

        for (int i = 0; i < n; ++i)
        {
            int sum1 = 0;
            for (int j = 0; j < n; ++j)
            {
                sum1 += a[j][i];
            }
            mx = max(mx, sum1);
        }

        cout << n * mx - tmp << endl;
    }
}