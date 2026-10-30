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
        int n, m;
        cin >> n >> m;
        int a[n + 5], b[m + 5];
        set<int> se;
        int cnt[100005] = {};
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            se.insert(a[i]);
            cnt[a[i]]++;
        }
        for (int i = 0; i < m; ++i)
        {
            cin >> b[i];
            se.insert(b[i]);
            cnt[b[i]]++;
        }
        for (auto x : se)
        {
            cout << x << " ";
        }
        cout << endl;
        for (auto x : se)
        {
            if (cnt[x] > 1)
            {
                cout << x << " ";
                cnt[x] = 0;
            }
        }
        cout << endl;
    }
}