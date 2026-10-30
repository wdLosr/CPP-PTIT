// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

ll lcm(ll a, ll b)
{
    return a / __gcd(a, b) * b;
}

ll lt(int n)
{
    ll t = 1;
    for (int i = 1; i < n; ++i)
    {
        t *= 10;
    }
    return t;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, n;
        cin >> x >> y >> z >> n;
        ll t1 = lcm(lcm(x, y), z);
        ll tmp = t1;
        int s = 0;
        while (tmp != 0)
        {
            tmp /= 10;
            s++;
        }
        if (s == n)
        {
            cout << t1;
        }
        else if (s > n)
        {
            cout << "-1";
        }
        else if (s < n)
        {
            ll tp = lt(n) / t1;
            ll du = lt(n) % t1;
            t1 *= tp + (du != 0);
            cout << t1;
        }
        cout << endl;
    }
}