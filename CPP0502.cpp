// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

struct ThiSinh
{
    string ten, ns;
    double d1, d2, d3;
};

void nhap(ThiSinh &A)
{
    getline(cin, A.ten);
    cin >> A.ns;
    cin >> A.d1 >> A.d2 >> A.d3;
}

void in(ThiSinh &A)
{
    cout << A.ten << " " << A.ns << " " << fixed << setprecision(1) << (A.d1 + A.d2 + A.d3);
}

int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}