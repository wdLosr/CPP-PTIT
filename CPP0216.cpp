// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

bool check(int l, int r, int a[])
{
    int id = l;
    for (int i = l; i < r; ++i)
    {
        if (a[i] > a[i + 1])
        {
            id = i;
            break;
        }
    }
    for (int i = id; i < r; ++i)
    {
        if (a[i] < a[i + 1])
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        cin >> l >> r;
        if (check(l, r, a))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}