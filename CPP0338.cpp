// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"
#define sz size
#define all(a) a.begin(), a.end()
#define MOD 1000000007

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
        string s; cin >> s;
        int k; cin >> k;
        int ans = 0;

        for (int i = 0; i < s.sz(); ++i)
        {
            unordered_set<char> x;
            for (int j = i; j < s.sz(); ++j)
            {
                x.insert(s[j]);
                if (x.sz() == k) ans++;
            }
        }

        cout << ans << endl;
    }
}