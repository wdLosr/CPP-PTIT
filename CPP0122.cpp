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
        int n;
        cin >> n;
        ll lcm1 = 1;
        for (int i = 2; i <= n; ++i)
        {
            lcm1 = 1LL * i * lcm1 / __gcd((ll)i, lcm1);
        }
        cout << lcm1 << endl;
    }
}