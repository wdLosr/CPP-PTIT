// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;

class NhanVien
{
public:
    string manv, ten, gt, ns, dc, ms, nk;

    friend istream &operator>>(istream &in, NhanVien &a)
    {
        a.manv = "00001";
        getline(in, a.ten);
        in >> a.gt >> a.ns;
        in.ignore();
        getline(in, a.dc);
        in >> a.ms >> a.nk;
        return in;
    }

    friend ostream &operator>>(ostream &out, NhanVien a)
    {
        out << a.manv << " " << a.ten << " " << a.gt << " "
            << a.ns << " " << a.dc << " " << a.ms << " " << a.nk << endl;
        return out;
    }
};

int main()
{
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}