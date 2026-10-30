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
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (auto &x : a)
        {
            cin >> x;
        }

        sort(a.begin(), a.end());

        int c1 = 0;
        int c2 = 1;

        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                cout << a[n - i - 1 + c1] << ' ';
                c1++;
            }
            else
            {
                cout << a[i - c2] << ' ';
                c2++;
            }
        }

        cout << endl;
    }
}