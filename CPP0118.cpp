// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int check(int n)
{
    int cnt = 0;
    for (int i = 2; i * i <= n; ++i)
    {
        int mu = 0;
        while (n % i == 0)
        {
            n /= i;
            mu++;
            cnt++;
        }
        if (mu > 1)
        {
            return 0;
        }
    }
    if (n)
        cnt++;
    return cnt == 3;
}

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
        cout << check(n) << endl;
    }
}