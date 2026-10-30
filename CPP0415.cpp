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
        int n, m;
        cin >> n >> m;
        int a[n + 5], b[m + 5];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        for (int i = 0; i < m; ++i)
        {
            cin >> b[i];
        }
        sort(b, b + m);
        cout << 1LL * b[0] * a[0] << endl;
    }
}