// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        for (int i = 2; i <= n; ++i)
        {
            while (n % i == 0)
            {
                cnt++;
                if (cnt == k)
                {
                    cout << i;
                    break;
                }
                n /= i;
            }
            if (k == cnt)
            {
                break;
            }
        }
        if (cnt != k)
            cout << "-1";
        cout << endl;
    }
}