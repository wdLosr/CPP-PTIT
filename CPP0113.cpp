// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (s[n - 2] == '8' && s[n - 1] == '6')
        {
            cout << "1" << endl;
        }
        else
            cout << "0" << endl;
    }
}