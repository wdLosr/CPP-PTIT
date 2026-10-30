// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
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
    int t;
    cin >> t;
    sang();
    while (t--)
    {
        int l, r, cnt = 0;
        cin >> l >> r;
        for (int i = l; i <= r; ++i)
        {
            if (nt[i])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}