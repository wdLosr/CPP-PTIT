// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

struct SinhVien
{
    string ten, lop;
    int d, m, y;
    double gpa;
};

void nhap(SinhVien &A)
{
    getline(cin, A.ten);

    cin >> A.lop;
    scanf("%d/%d/%d", &A.d, &A.m, &A.y);
    cin >> A.gpa;
}

void in(SinhVien &A)
{
    cout << "B20DCCN001 " << A.ten << " " << A.lop << " " 
    << setfill('0') << setw(2) << right << A.d << "/" 
    << setfill('0') << setw(2) << right << A.m << "/" 
    << setfill('0') << setw(4) << right << A.y << " " 
    << fixed << setprecision(2) << A.gpa;
}

int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}