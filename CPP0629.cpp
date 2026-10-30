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
    string mdn, name;
    int num;
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<SinhVien> ds(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> ds[i].mdn;
        cin.ignore();
        getline(cin, ds[i].name);
        cin >> ds[i].num;
    }

    sort(ds.begin(), ds.end(), [](SinhVien &x, SinhVien &y)
    {
        if(x.num == y.num) return x.mdn < y.mdn;
        return x.num > y.num;
    });

    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:" << endl;
        for (auto &x : ds)
        {
            if (x.num >= a && x.num <= b)
            {
                cout << x.mdn << ' ' << x.name << ' ' << x.num << endl;
            }
        }
    }
}