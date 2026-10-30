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
            ans1 += toupper(w1[0]);
            for (int i = 1; i < w1.size(); ++i)
            {
                ans1 += tolower(w1[i]);
            }
            if (m1 < m - 2)
            {
                ans1 += " ";
            }
        }
        else
            for (int i = 0; i < w1.size(); ++i)
            {
                ans += toupper(w1[i]);
            }
        m1++;
    }
    ans = ans1 + ", " + ans;
    cout << ans;
}