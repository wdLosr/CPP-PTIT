// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int snt(int n)
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
    int n;
    cin >> n;
    if (snt(n))
        cout << "YES";
    else
        cout << "NO";
}