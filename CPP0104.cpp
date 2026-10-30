// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll tgt(int n)
{
    ll tich = 1;
    for (int i = 1; i <= n; ++i)
    {
        tich *= (ll)i;
    }
    return tich;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += tgt(i);
    }
    cout << sum;
}