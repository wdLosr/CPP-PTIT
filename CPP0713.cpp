// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

int n, a[100], ok;

void ktao()
{
    for (int i = 1; i <= n; ++i)
    {
        a[i] = i;
    }
}

void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        --i;
    }
    if (i == 0)
        ok = false;
    else
    {
        int j = n;
        while (a[j] < a[i])
        {
            --j;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ktao();
        ok = true;
        while (ok)
        {

            for (int i = 1; i <= n; ++i)
            {
                cout << a[i];
            }
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}