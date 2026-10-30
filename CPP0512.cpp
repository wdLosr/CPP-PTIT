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

struct PhanSo
{
    ll tu, mau;
};

void xuat(PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}

void process(PhanSo &a, PhanSo &b)
{
    PhanSo d;
    PhanSo c;

    ll gcD = __gcd(a.mau, b.mau);
    
    c.mau = (a.mau / gcD) * b.mau;
    c.tu = a.tu * (c.mau / a.mau) + b.tu * (c.mau / b.mau);
    c.mau *= c.mau;
    c.tu *= c.tu;
    ll u1 = __gcd(c.tu, c.mau);
    c.tu /= u1;
    c.mau /= u1;

    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;
    ll u2 = __gcd(d.tu, d.mau);
    d.tu /= u2;
    d.mau /= u2;

    xuat(c);
    cout << ' ';
    xuat(d);
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}