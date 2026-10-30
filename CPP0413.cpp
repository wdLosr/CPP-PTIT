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
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        int m = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                cout << a[i / 2] << " ";
            }
            else
            {
                cout << a[n - (i + 1) / 2] << " ";
            }
        }
        cout << endl;
    }
}