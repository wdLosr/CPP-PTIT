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
};

int main()
{
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}