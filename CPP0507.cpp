// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

struct PhanSo
{
    ll tu, mau;
};

void nhap(PhanSo &A)
{
    cin >> A.tu >> A.mau;
}

PhanSo tong(PhanSo &A, PhanSo &B)
{
    ll u = __gcd(A.mau, B.mau);
    ll tmp = (A.mau * B.mau) / u;
    ll t_a = A.tu * (tmp / A.mau);
    ll t_b = B.tu * (tmp / B.mau);
    ll u_new = __gcd(t_a + t_b, tmp);
    A.tu = (t_a + t_b) / u_new;
    A.mau = tmp / u_new;
    return A;
}

void in(PhanSo &A)
{
    cout << A.tu << "/" << A.mau;
}

int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}