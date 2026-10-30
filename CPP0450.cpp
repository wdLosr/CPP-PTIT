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
        vector<int> a(n), cnt(1000005, 0);
        for (auto &x : a)
        {
            cin >> x;
        }
        int ok = 0;
        for (auto x : a)
        {
            cnt[x]++;
            if (cnt[x] == 2)
            {
                cout << x;
                ok = 1;
                break;
            }
        }
        if (!ok)
            cout << "-1";
        cout << endl;
    }
}