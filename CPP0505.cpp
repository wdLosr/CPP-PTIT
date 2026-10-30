// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

struct NhanVien
{
    string name, sx, ns, dc, tax, nk;
};

void nhap(NhanVien &A)
{
    getline(cin, A.name);
    cin >> A.sx >> A.ns;
    cin.ignore();
    getline(cin, A.dc);
    cin >> A.tax >> A.nk;
}

void in(NhanVien &A)
{
    cout << "00001" << " " << A.name << " " << A.sx << " " << A.ns << " " << A.dc << " " << A.tax << " " << A.nk;
}

int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}