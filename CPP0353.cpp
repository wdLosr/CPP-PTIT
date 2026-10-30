// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

int re(char x)
{
    if (x == 'a' || x == 'b' || x == 'c') return 2;
    if (x == 'd' || x == 'e' || x == 'f') return 3;
    if (x == 'g' || x == 'h' || x == 'i') return 4;
    if (x == 'j' || x == 'k' || x == 'l') return 5;
    if (x == 'm' || x == 'n' || x == 'o') return 6;
    if (x == 't' || x == 'u' || x == 'v') return 8;
    if (x == 'p' || x == 'q' || x == 'r' || x == 's') return 7;
    if (x == 'w' || x == 'x' || x == 'y' || x == 'z') return 9; 
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

        string res = "";

        for (auto x : s)
        {
            x = tolower(x);
            res += to_string(re(x));
        }

        string m = res;
        reverse(m.begin(), m.end());

        if (m == res) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}