// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

ll f[93] = {0};
void fibo()
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 92; ++i)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    fibo();
    while (t--)
    {
        ll n;
        cin >> n;
        int check = 0;
        for (int i = 0; i <= 92; ++i)
        {
            if (f[i] == n)
            {
                cout << "YES";
                check = 1;
                break;
            }
        }
        if (!check)
            cout << "NO";
        cout << endl;
    }
}