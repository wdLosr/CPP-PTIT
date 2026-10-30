// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int binary_search(vector<int> a, int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
            return m;
        if (a[l] <= a[m])
        {
            if (a[l] <= x && a[m] > x)
                r = m - 1;
            else
                l = m + 1;
        }
        else
        {
            if (a[r] >= x && a[m] < x)
                l = m + 1;
            else
                r = m - 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        cout << binary_search(a, n, k) + 1 << endl;
    }
}