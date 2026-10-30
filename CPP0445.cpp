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
        for (auto &x : a)
        {
            cin >> x;
            se.insert(x);
        }
        sort(a.begin(), a.end());
        int mn1 = a[0];
        int ok = 0;
        int mn2 = 0;
        for (auto it : se)
        {
            if (it > mn1)
            {
                mn2 = it;
                ok = 1;
                break;
            }
        }
        if (ok)
            cout << mn1 << " " << mn2;
        else
            cout << "-1";
        cout << endl;
    }
}