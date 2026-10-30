// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int id = 1;

struct NhanVien
{
    string name, sx, ns, dc, tax, nk;
    int ma;
};

void nhap(NhanVien &A)
{
    cin.ignore();
    A.ma = id++;
    getline(cin, A.name);
    cin >> A.sx >> A.ns;
    cin.ignore();
    getline(cin, A.dc);
    cin >> A.tax >> A.nk;
}

void inds(NhanVien ds[], int N)
{
    for (int i = 0; i < N; ++i)
    {
        cout << setfill('0') << setw(5) << right << ds[i].ma << " " << ds[i].name << " " << ds[i].sx << " " << ds[i].ns << " " << ds[i].dc << " " << ds[i].tax << " " << ds[i].nk << endl;
        ;
    }
}

int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}