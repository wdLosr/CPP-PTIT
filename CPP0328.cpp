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

int solve(string s, int k)
{
    int ans = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        int n = 0;
        for (int j = i; j < s.size(); ++j)
        {
            n = n * 10 + (s[j] - '0');
            n %= k;
            if (n == 0) ++ans;
        }
    }
    return ans;
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
        string s;
        cin >> s;
        cout << solve(s, 8) - solve(s, 24) << endl;
    }
}