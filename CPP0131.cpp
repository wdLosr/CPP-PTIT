// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int a[10005] = {0};
void sang()
{
    for (int i = 0; i <= 10000; ++i)
    {
        a[i] = 1;
    }
    a[0] = a[1] = 0;
    for (int i = 2; i * i <= 10000; ++i)
    {
        if (a[i])
        {
            for (int j = i * i; j <= 10000; j += i)
            {
                a[j] = 0;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sang();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << "1 ";
        for (int i = 2; i <= n; ++i)
        {
            if (i % 2 == 0)
            {
                cout << "2" << " ";
            }
            else if (a[i])
            {
                cout << i << " ";
            }
            else
            {
                for (int j = 3; j * j <= i; ++j)
                {
                    if (a[j] && i%j==0)
                    {
                        cout << j << " ";
                        break;
                    }
                }
            }
        }
        cout<<endl;
    }
}