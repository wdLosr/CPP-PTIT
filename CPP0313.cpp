// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        string s;
        getline(cin, s);
        string x;
        cin >> x;
        stringstream ss(s);
        string w;
        while (ss >> w)
        {
            if (w != x)
            {
                cout << w << " ";
            }
        }
    }
}