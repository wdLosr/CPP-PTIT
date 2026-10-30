// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int f[30] = {};
void fibo()
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i < 26; ++i)
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
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            for (int j = 0; j < 26; ++j)
            {
                if (f[j] == a[i])
                {
                    cout << a[i] << " ";
                    break;
                }
            }
        }
        cout << endl;
    }
}