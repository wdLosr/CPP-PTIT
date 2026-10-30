// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a)
        {
            cin >> x;
            sum += x;
        }

        int s[n] = {0};
        s[0] = a[0];

        for (int i = 1; i < n; ++i)
        {
            s[i] = s[i - 1] + a[i];
        }

        int ok = 0;

        for (int i = 0; i < n - 1; ++i)
        {
            if (s[i] == sum - s[i] - a[i + 1])
            {
                cout << i + 2;
                ok = 1;
                break;
            }
        }
        if (!ok) cout << -1;
        cout << endl;
    }
}