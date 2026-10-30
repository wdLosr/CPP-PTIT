// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

int solve(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        sum += (s[i] - '0');
    }
    if (sum > 9) return solve(to_string(sum));
    else return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        int x = solve(s);
        if(x == 9) cout << 1 << endl;
        else cout << 0 << endl;
    }
}