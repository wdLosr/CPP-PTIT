// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int check(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; ++i)
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
        int x, cnt = 0;
        cin >> x;
        for (int i = 1; i < x; ++i)
        {
            if (__gcd(i, x) == 1)
            {
                cnt++;
            }
        }
        cout << check(cnt) << endl;
    }
}