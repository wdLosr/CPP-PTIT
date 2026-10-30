// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += 1.0 / i;
    }
    cout << fixed << setprecision(4) << sum;
}