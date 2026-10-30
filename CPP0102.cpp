// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        if (isupper(c))
        {
            cout << (char)tolower(c) << '\n';
        }
        else cout << (char)toupper(c) << '\n';
    }
}