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
        vector<int> a(n);
        ll sum = 0;
        for (int i=0; i<n-1; ++i)
        {
            cin >> a[i];
            sum += 1LL * a[i];
        }
        ll s = (1LL * (1 + n) * n) / 2;
        cout << s - sum << endl;
    }
}