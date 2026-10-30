// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int f[10005] = {0};
int a[10005];
int n, q;
void check()
{
    f[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        f[i] = f[i - 1] + a[i-1];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        check();
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << f[r] - f[l - 1] << endl;
        }
        cout << endl;
    }
}