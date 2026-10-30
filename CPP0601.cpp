// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

class SinhVien
{
public:
    string name, lop;
    int d, m, y;
    float gpa;
    void nhap();
    void xuat();
};

void SinhVien::nhap()
{
    getline(cin, name);
    cin >> lop;
    scanf("%d/%d/%d", &d, &m, &y);
    cin >> gpa;
}

void SinhVien::xuat()
{
    cout << "B20DCCN001" << " " << name << " " << lop << " " << setfill('0') << setw(2) << right << d << "/" << setfill('0') << setw(2) << right << m << "/" << setfill('0') << setw(4) << right << y << " " << fixed << setprecision(2) << gpa;
}

int main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}