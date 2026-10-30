// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

struct Time
{
    int h, m, s;
};

bool cmp(Time &a, Time &b)
{
    if (a.h != b.h)
        return a.h < b.h;
    if (a.m != b.m)
        return a.m < b.m;
    return a.s < b.s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    vector<Time> ds(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> ds[i].h >> ds[i].m >> ds[i].s;
    }

    sort(ds.begin(), ds.end(), cmp);

    for (auto &x : ds)
    {
        cout << x.h << ' ' << x.m << ' ' << x.s << endl;
    }
}