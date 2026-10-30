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
        vector<int> a(n);
        set<int> se;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            se.insert(a[i]);
        }
        sort(a.begin(), a.end());
        int tmp = a[n - 1] - a[0] + 1 - se.size();
        cout << tmp << endl;
    }
}