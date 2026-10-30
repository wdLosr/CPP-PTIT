// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        int cnt[1005] = {0};
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        sort(a, a + n);
        for (int i = 0; i < n; ++i)
        {
            if (cnt[a[i]] != 0)
            {
                cout << a[i] << " ";
                cnt[a[i]] = 0;
            }
        }
    }
}