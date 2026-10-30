// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

bool cmp(string a, string b)
{
    return a + b > b + a;
}

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
        vector<string> a(n);

        for (auto &x : a)
        {
            cin >> x;
        }

        sort(a.begin(), a.end(), cmp);

        string ans = "";

        for (auto x : a)
        {
            ans += x;
        }

        cout << ans << endl;
    }
}