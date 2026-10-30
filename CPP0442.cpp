// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int tknp(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            return 1;
        }
        else if (a[m] < x)
        {
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n + 5];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int it = tknp(a, n, x);
        if (it)
            cout << "1";
        else
            cout << "-1";
        cout << endl;
    }
}