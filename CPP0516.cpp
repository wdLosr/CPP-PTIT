// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"
#define sz size
#define all(a) a.begin(), a.end()
#define MOD 1000000007

using namespace std;

struct MatHang
{
    string tmh, nhom;
    double gm, gb, ln;
    int id;
};

void nhap(MatHang ds[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        ds[i].id = i + 1;
        cin.ignore();
        getline(cin, ds[i].tmh);
        getline(cin, ds[i].nhom);
        cin >> ds[i].gm >> ds[i].gb;
        ds[i].ln = ds[i].gb - ds[i].gm;
    }
}

bool cmp(MatHang &a, MatHang &b)
{
    return a.ln > b.ln;
}

void xuat(MatHang ds[], int n)
{
    sort(ds, ds + n, cmp);
    for (int i = 0; i < n; ++i)
    {
        cout << ds[i].id << ' ' << ds[i].tmh << ' ' << ds[i].nhom << ' ' << fixed << setprecision(2) << ds[i].ln << endl;
    }
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
        struct MatHang ds[n];
        nhap(ds, n);
        xuat(ds, n);
    }
}