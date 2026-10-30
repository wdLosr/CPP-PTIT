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
        string n;
        ll m;
        
        cin >> n >> m;

        ll res = 0;

        for (auto x : n)
        {
            res = (res * 10 + (x - '0')) % m;
        }

        cout << res << endl;
    }
}