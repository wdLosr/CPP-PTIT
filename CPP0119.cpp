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
        int cnt = 0;
        if (n % 2 != 0)
            cout << "0";
        else
        {
            int tmp = 1;
            while (n % 2 == 0)
            {
                cnt++;
                n /= 2;
            }
            for (int i = 3; i * i <= n; ++i)
            {
                int m = 0;
                while (n % i == 0)
                {
                    m++;
                    n /= i;
                }
                tmp *= (m + 1);
            }
            if (n > 1)
                tmp *= 2;
            cout << (cnt + 1) * tmp - tmp;
        }
        cout << endl;
    }
}