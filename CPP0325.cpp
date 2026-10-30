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
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int sc = 0, sl = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                sc += s[i] - '0';
            }
            else
                sl += s[i] - '0';
        }
        if (abs(sc - sl) % 11 == 0)
        {
            cout << "1";
        }
        else
            cout << "0";
        cout << endl;
    }
}