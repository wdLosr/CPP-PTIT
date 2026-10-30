// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int nt(int n)
{
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int st(int n)
{
    while (n >= 10)
    {
        if ((n % 10) <= (n / 10 % 10))
            return 0;
        n /= 10;
    }
    return 1;
}

int sg(int n)
{
    while (n >= 10)
    {
        if ((n % 10) >= (n / 10 % 10))
            return 0;
        n /= 10;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll cnt = 0;
        int l = pow(10, n - 1), r = pow(10, n);
        for (int i = l; i < r; ++i)
        {
            if ((st(i) || sg(i)) && nt(i))
            {
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
}