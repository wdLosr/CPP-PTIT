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
        vector<int> a(n);

        for (auto &x : a)
        {
            cin >> x;
        }

        for (int i = 1; i < n; ++i)
        {
            if (a[i] != 0 && a[i - 1] == a[i])
            {
                a[i - 1] *= 2;
                a[i] = 0;
            }
        }

        vector<int> re;

        for (auto x : a)
        {
            if (x != 0) cout << x << ' ';
            else re.push_back(x);
        }

        for(auto x : re)
        {
            cout << x << ' ';
        }

        cout << endl;
    }
}