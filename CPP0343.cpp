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
        string s, w;
        getline(cin, s);
        stringstream ss(s);
        int n = 0;
        int dc = 0, dl = 0;
        while (ss >> w)
        {
            int x = stoi(w);
            if (x % 2 == 0)
                dc++;
            else
                dl++;
            n++;
        }
        if ((n % 2 == 0 && dc > dl) || (n % 2 != 0 && dl > dc))
        {
            cout << "YES";
        }
        else
            cout << "NO";
        cout << endl;
    }
}