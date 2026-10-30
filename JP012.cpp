// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

ll f[95] = {};
void fibo()
{
    f[0] = f[1] = 1;
    for (int i = 2; i < 93; ++i)
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
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; ++i)
        {
            cout << f[i - 1] << " ";
        }
        cout << endl;
    }
    
}