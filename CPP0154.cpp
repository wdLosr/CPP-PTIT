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
        ll tmp = 0;
        if (n <= k)
        {
            tmp = n * (n + 1) / 2;
        }
        else
        {
            tmp = (k * (k - 1) / 2) * (n / k) + ((n % k) * (n % k + 1) / 2);
        }
        if (tmp == k)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
}