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
        string s;
        getline(cin, s);
        stringstream ss(s);
        string w;
        
        vector<string> a;

        while(ss >> w)
        {
            a.push_back(w);
        }

        reverse(a.begin(), a.end());

        for(auto &x : a)
        {
            cout << x << ' ';
        }

        cout << endl;
    }
}