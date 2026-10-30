// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int nt(ll n)
{
    if (n < 2)
        return 0;
    for (ll i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (nt(n))
            cout << n;
        else
        {
            ll tmp = 0;
            for (ll i = 2; i * i <= n; ++i)
            {

                while (n % i == 0)
                {
                    tmp = i;
                    n /= i;
                }
            }
            cout << max(tmp, n);
        }
        cout << endl;
    }
}