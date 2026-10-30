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

bool check(string s)
{
    int l = 0, r = s.sz() - 1;
    while (l < r)
    {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

bool cmp(string a, string b)
{
    if (a.sz() != b.sz()) return a.sz() > b.sz();
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    unordered_map<string, int> mp;
    while (cin >> s)
    {
        if (check(s) && s.sz() > 1)
        {
            mp[s]++;
        }
    }

    vector<string> v;
    for (auto &x : mp) v.pb(x.first);

    sort(all(v), cmp);

    for (auto x : v)
    {
        cout << x << ' ' << mp[x] << endl;
    }
}