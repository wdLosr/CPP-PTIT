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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int ok = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == x)
            {
                cout << i + 1;
                ok = 1;
                break;
            }
        }
        if (!ok)
            cout << "-1";
        cout << endl;
    }
}