// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"
#define all(a) a.begin(), a.end()
#define MOD 1000000007

using namespace std;

int cnt = 0;

struct NhanVien
{
    string name, sex, address, id, thue, bd, ngaysinh, thangsinh, namsinh, ma;
};

void nhap(NhanVien &A)
{
    ++cnt;
    cin.ignore();
    if (cnt < 10)
        A.ma = "0000" + to_string(cnt);
    else
        A.ma = "000" + to_string(cnt);
    getline(cin, A.name);
    getline(cin, A.sex);
    getline(cin, A.bd);
    stringstream ss(A.bd);
    getline(ss, A.thangsinh, '/');
    getline(ss, A.ngaysinh, '/');
    getline(ss, A.namsinh, '/');
    getline(cin, A.address);
    getline(cin, A.id);
    cin >> A.thue;
}

bool cmp(NhanVien &a, NhanVien &b)
{
    if (a.namsinh != b.namsinh)
        return a.namsinh < b.namsinh;
    if (a.thangsinh != b.thangsinh)
        return a.thangsinh < b.thangsinh;
    return a.ngaysinh < b.ngaysinh;
}
void sapxep(NhanVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}

void inds(NhanVien ds[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << ds[i].ma << ' ' << ds[i].name << ' ' << ds[i].sex << ' ' << ds[i].bd << ' ' << ds[i].address << ' ' << ds[i].id << ' ' << ds[i].thue << endl;
    }
}

int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
