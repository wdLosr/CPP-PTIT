// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, a, b, cnt = 0;
        cin >> m >> n >> a >> b;
        for (int i = m; i <= n; ++i)
        {
            if (i % a == 0 || i % b == 0)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}