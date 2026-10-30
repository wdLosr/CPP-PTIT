// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

class PhanSo
{
public:
    ll tu, mau;
    PhanSo(ll a, ll b)
    {
        tu = a;
        mau = b;
    }
    friend istream &operator>>(istream &in, PhanSo &a)
    {
        in >> a.tu >> a.mau;
        return in;
    }
    friend ostream &operator<<(ostream &out, PhanSo a)
    {
        out << a.tu << "/" << a.mau;
        return out;
    }
    void rutgon()
    {
        ll tmp = __gcd(tu, mau);
        tu /= tmp;
        mau /= tmp;
    }
    friend PhanSo operator+(PhanSo &a, PhanSo &b)
    {
        a.rutgon();
        b.rutgon();
        a.tu *= b.mau;
        b.tu *= a.mau;
        ll tmp = __gcd(a.tu + b.tu, a.mau * b.mau);
        a.tu = (a.tu + b.tu) / tmp;
        a.mau = (a.mau * b.mau) / tmp;
        return a;
    }
};

int main()
{
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}
