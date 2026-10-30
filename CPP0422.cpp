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
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != 0)
            {
                cout << a[i] << " ";
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == 0)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
}