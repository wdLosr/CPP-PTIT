// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

struct Nguoi
{
    string Ten;
    int d, m, y;
};

bool cmp(Nguoi &a, Nguoi &b)
{
    if (a.y != b.y) return a.y < b.y;
    if (a.m != b.m) return a.m < b.m;
    return a.d < b.d;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<Nguoi> a(n);
        for (int i = 0; i < n; ++i)
        {
            char x;
            cin >> a[i].Ten;
            cin >> a[i].d >> x >> a[i].m >> x >> a[i].y;
        }
        Nguoi tre = *max_element(a.begin(), a.end(), cmp);
        Nguoi gia = *min_element(a.begin(), a.end(), cmp);
        cout << tre.Ten << '\n' << gia.Ten;
    }
}