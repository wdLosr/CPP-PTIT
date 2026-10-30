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

struct SinhVien
{
    string msv, name, lop;
    float a, b, c;
};

void nhap(SinhVien &n)
{
    cin >> n.msv;
    cin.ignore();
    getline(cin, n.name);
    cin >> n.lop;
    cin >> n.a >> n.b >> n.c;
}

bool cmp(SinhVien &a, SinhVien &b)
{
    return a.msv < b.msv;
}

void sap_xep(SinhVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}

void in_ds(SinhVien ds[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << i + 1 << ' ' << ds[i].msv << ' ' << ds[i].name << ' ' << ds[i].lop << ' '
             << fixed << setprecision(1) << ds[i].a << ' '
             << fixed << setprecision(1) << ds[i].b << ' '
             << fixed << setprecision(1) << ds[i].c << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}
