// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 2; i * i <= n; ++i)
    {
        int mu = 0;
        while (n % i == 0)
        {
            mu++;
            n /= i;
        }
        if (mu != 0)
        {
            cout << i << " " << mu << endl;
        }
    }
    if (n > 1)
        cout << n << " " << "1";
}