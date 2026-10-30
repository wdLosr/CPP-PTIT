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
        vector<int> a(n), b(m);
        multiset<int> mu;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            mu.insert(a[i]);
        }
        for (int i = 0; i < m; ++i)
        {
            cin >> b[i];
            mu.insert(b[i]);
        }
        for (auto x : mu)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}