// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int check(int n)
{
    int dl = 0;
    int dc = 0;
    while (n != 0)
    {
        int tmp = n % 10;
        if (tmp % 2 == 0) dc++;
        else dl++;
        n /= 10;
    }
    if (dc == dl) return 1;
    else return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = pow(10, n - 1); i < pow(10, n); ++i)
    {
        if (check(i))
        {
            cout << i << ' ';
            cnt++;
            if (cnt % 10 == 0)
            {
                cout << '\n';
            }
        }
    }
}