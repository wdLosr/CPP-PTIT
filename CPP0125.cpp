// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int nt[1000005];

void sang()
{
    for (int i = 0; i <= 1000000; ++i)
    {
        nt[i] = 1;
    }
    nt[0] = nt[1] = 0;
    for (int i = 2; i * i <= 1000000; ++i)
    {
        if (nt[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                nt[j] = 0;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sang();
    int a, b;
    cin >> a >> b;
    for (int i = min(a, b); i <= max(a, b); ++i)
    {
        if (nt[i])
        {
            cout << i << " ";
        }
    }
}