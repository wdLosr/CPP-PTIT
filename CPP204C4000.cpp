// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

struct SinhVien
{
    string ten, lop;
    int d, m, y;
    double gpa;
};

void nhapThongTinSV(SinhVien &a)
{
    getline(cin, a.ten);
    cin >> a.lop;
    char x;
    cin >> a.d >> x >> a.m >> x >> a.y;
    cin >> a.gpa;
}

void inThongTinSV(SinhVien &a)
{
    cout << "N20DCCN001 " << a.ten << " " << a.lop << " "
         << setfill('0') << setw(2) << right << a.d << "/"
         << setfill('0') << setw(2) << right << a.m << "/"
         << setfill('0') << setw(4) << right << a.y << " "
         << fixed << setprecision(2) << a.gpa;
}

int main()
{
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}