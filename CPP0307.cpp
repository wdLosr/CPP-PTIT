// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

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
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        set<string> v1, v2;
        stringstream ss1(s1);
        stringstream ss2(s2);
        string w1, w2;
        while (ss1 >> w1)
        {
            v1.insert(w1);
        }
        while (ss2 >> w2)
        {
            v2.insert(w2);
        }
        for (auto x : v1)
        {
            int ok = 0;
            for (auto y : v2)
            {
                if (x == y)
                {
                    ok = 1;
                    break;
                }
            }
            if (!ok)
            {
                cout << x << ' ';
            }
        }
        cout << endl;
    }
}