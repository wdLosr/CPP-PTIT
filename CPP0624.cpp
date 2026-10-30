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
        getline(cin, s);
        transform(all(s), s.begin(), ::toupper);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
        for (auto &x : ds)
        {
            if (x.lop[0] == 'E' && (x.msv[5] == 'C' || x.msv[5] == 'A')) continue;
            if (s[0] == x.msv[5])
            {
                cout << x.msv << ' ' << x.name << ' ' << x.lop << ' ' << x.mail << endl;
            }
        }
    }
}