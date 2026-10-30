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
        int n, k;
        cin >> k >> n;
        int a[k + 5][n + 5];
        multiset<int> se;
        for (int i = 0; i < k; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> a[i][j];
                se.insert(a[i][j]);
            }
        }
        for (auto x : se)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}