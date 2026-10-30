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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        multiset<int> mu;
        for (auto &it : a)
        {
            cin >> it;
            mu.insert(it);
        }
        int cnt = mu.count(x);
        if (cnt)
            cout << cnt;
        else
            cout << "-1";
        cout << endl;
    }
}