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
        ll n, k;
        cin >> n >> k;
        if (n <= k)
            cout << n * (n + 1) / 2 << endl;
        else
        {
            cout << (k * (k - 1) / 2) * (n / k) + ((n % k) * (n % k + 1) / 2) << endl;
        }
    }
}