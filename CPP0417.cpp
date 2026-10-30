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
        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i].fi;
            v[i].se = i;
        }

        sort(v.begin(), v.end());

        int mni = n, mxi = 0;

        for (int i = 0; i < n; ++i)
        {
            if (i != v[i].se)
            {   
                mni = min(mni, v[i].se);
                mxi = max(mxi, v[i].se);
            }
        }

        cout << mni + 1 << ' ' << mxi + 1 << endl;
    }
}