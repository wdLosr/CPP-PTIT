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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);

        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        int ans = -1;

        for (int i = 0; i < n; ++i)
        {
            if (binary_search(a.begin(), a.end(), a[i] + x))
            {
                ans = 1;
            }
        }

        cout << ans << endl;
    }
}