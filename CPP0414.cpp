// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        set<int> se;
        for (int i = 0; i < n; ++i)
        {
            while (a[i] != 0)
            {
                se.insert(a[i] % 10);
                a[i] /= 10;
            }
        }
        for (auto it : se)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}