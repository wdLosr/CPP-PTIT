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
        int n, m;
        cin >> n >> m;

        int cnt[100000] = {0};

        vector<int> a(n);
        vector<int> b(m);

        set<int> hop;
        set<int> giao;

        for (auto &x : a)
        {
            cin >> x;
            hop.insert(x);
            cnt[x]++;
        }

        for (auto &y : b)
        {
            cin >> y;
            hop.insert(y);
            if (cnt[y] != 0)
            {
                giao.insert(y);
            }
        }

        for (auto x : hop)
        {
            cout << x << ' ';
        }

        cout << endl;

        for (auto x : giao)
        {
            cout << x << ' ';
        }

        cout << endl;
    }
}