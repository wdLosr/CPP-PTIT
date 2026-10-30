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

void rutgon(PhanSo &A)
{
    ll u = __gcd(A.tu, A.mau);
    A.tu = A.tu / u;
    A.mau = A.mau / u;
}

void in(PhanSo &A)
{
    cout << A.tu << "/" << A.mau;
}

int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}