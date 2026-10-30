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
        int a, b;
        cin >> a >> b;
        int gcd = __gcd(a, b);
        ll lcm = 1LL * a * b / (ll)gcd;
        cout << lcm << " " << gcd;
        cout << endl;
    }
}