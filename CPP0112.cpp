// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        double xa, ya, xb, yb;
        cin >> xa >> ya >> xb >> yb;
        double ans = 0;
        ans = (double)sqrt(((xb - xa) * (xb - xa)) + ((yb - ya) * (yb - ya)));
        cout << fixed << setprecision(4) << ans << '\n';
    }
}