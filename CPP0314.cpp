// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        set<string> st;
        for (int i = 0; i < n; i++)
        {
            string s;
            getline(cin, s);
            st.insert(s);
        }
        cout << st.size();
    }
}