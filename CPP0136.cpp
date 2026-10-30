// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int a[1000005] = {0};
void sang()
{
    for (int i = 0; i <= 1000000; ++i)
    {
        a[i] = 1;
    }
    a[0] = a[1] = 0;
    for (int i = 2; i * i <= 1000000; ++i)
    {
        if (a[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                a[j] = 0;
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
        ll n;
        cin >> n;
        int cnt = 0;
        for (int i = 0; i * i <= n; ++i)
        {
            if (a[i])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}