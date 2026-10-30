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
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &x : v)
        {
            cin >> x;
        }
        int l = 0, r = n - 1, ans = 0;
        while (l <= r)
        {
            if (v[l] < v[r])
            {
                v[l + 1] += v[l];
                ++l;
                ++ans;
            }
            else if (v[l] > v[r])
            {
                v[r - 1] += v[r];
                --r;
                ++ans;
            }
            else
            {
                ++l;
                --r;
            }
        }
        cout << ans << endl;
    }
}