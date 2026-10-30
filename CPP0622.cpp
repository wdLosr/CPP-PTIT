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

struct SinhVien
{
    string msv, name, lop, mail;
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<SinhVien> ds(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> ds[i].msv;
        cin.ignore();
        getline(cin, ds[i].name);
        cin >> ds[i].lop >> ds[i].mail;
    }

    int q;
    cin >> q;
    cin.ignore();
    while (q--)
    {
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
        for (auto &x : ds)
        {
            if (x.lop == s)
            {
                cout << x.msv << ' ' << x.name << ' ' << x.lop << ' ' << x.mail << endl;
            }
        }
    }
}