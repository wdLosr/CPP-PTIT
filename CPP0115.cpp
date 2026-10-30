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
        int n;
        cin >> n;
        int mu = 0;
        for (int i = 2; i <= sqrt(n); ++i)
        {
            int mu = 0;
            while (n % i == 0)
            {
                mu++;
                n /= i;
            }
            if (mu != 0)
            {
                cout << i << " " << mu << " ";
            }
        }
        if (n > 1)
            cout << n << " " << "1";
        cout << endl;
    }
}