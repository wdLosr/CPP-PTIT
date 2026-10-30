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
    string msv, name, lop, mail, dngh;
    int id;
};

bool cmp(SinhVien &a, SinhVien &b)
{
    return a.name < b.name;
}

void nhap(SinhVien ds[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        ds[i].id = i + 1;
        cin >> ds[i].msv;
        cin.ignore();
        getline(cin, ds[i].name);
        cin >> ds[i].lop >> ds[i].mail >> ds[i].dngh;
    }
    sort(ds, ds + n, cmp);
}

void xuat(SinhVien ds[], int n, string x)
{
    for (int i = 0; i < n; ++i)
    {
        if (ds[i].dngh == x)
        {
            cout << ds[i].id << ' ' << ds[i].msv << ' ' << ds[i].name << ' ' << ds[i].lop << ' ' << ds[i].mail << ' ' << ds[i].dngh << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    struct SinhVien ds[105];
    nhap(ds, n);
    int q;
    cin >> q;
    while (q--)
    {
        string x;
        cin >> x;
        xuat(ds, n, x);
    }
}