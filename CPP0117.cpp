// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int rg(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

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
        int tmp = rg(n);
        if (tmp < 10)
            cout << tmp;
        else
        {
            while (tmp >= 10)
            {
                tmp = rg(tmp);
            }
            cout << tmp;
        }
        cout << endl;
    }
}