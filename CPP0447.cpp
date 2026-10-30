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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        sort(a.begin(), a.end(), greater<int>());
        for (int i = 0; i < k; ++i)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}