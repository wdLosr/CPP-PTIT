// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    getline(cin, s);
    for (char &x : s)
    {
        x = tolower(x);
    }
    stringstream ss(s);
    stringstream ss1(s);
    string w, w1;
    string ans, ans1;
    int m = 0, m1 = 0;
    while (ss >> w)
    {
        m++;
    }
    while (ss1 >> w1)
    {
        if (m1 < m - 1)
        {
            ans1 += w1[0];
        }
        else
            ans += w1;
        m1++;
    }
    ans = ans + ans1;
    cout << ans << "@ptit.edu.vn";
}