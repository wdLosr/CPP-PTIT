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

struct Lop
{
    string msv, name, lop, mail;
};

bool cmp(Lop a, Lop b)
{
    if (a.lop == b.lop) return a.msv < b.msv;
    return a.lop < b.lop;
}

void nhap(Lop ds[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cin >> ds[i].msv;
        cin.ignore();
        getline(cin, ds[i].name);
        cin >> ds[i].lop;
        cin >> ds[i].mail;
    }
    sort(ds, ds + n, cmp);
}

void xuat(Lop ds[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << ds[i].msv << ' ' << ds[i].name << ' ' << ds[i].lop << ' ' << ds[i].mail << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    struct Lop ds[1005];
    int n;
    cin >> n;
    nhap(ds, n);
    xuat(ds, n);
}