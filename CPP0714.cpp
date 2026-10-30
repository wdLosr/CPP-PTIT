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
        if (prev_permutation(a, a + n))
        {
            for (int i = 0; i < n; ++i)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
}