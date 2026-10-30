// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

const int mod = 1e9 + 7;

int f[1005];

void fibo()
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 1000; ++i)
    {
        f[i] = (f[i - 1] + f[i - 2]) % mod;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    fibo();
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
}