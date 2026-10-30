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
    string msv, name, lop, mail, year;
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
        ds[i].year += ds[i].lop[1];
        ds[i].year += ds[i].lop[2];
    }

    int q;
    cin >> q;
    cin.ignore();
    while (q--)
    {
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN KHOA " << s << ":" << endl;
        for (auto &x : ds)
        {
            string tmp = "";
            tmp += s[2];
            tmp += s[3];
            if (x.year == tmp)
            {
                cout << x.msv << ' ' << x.name << ' ' << x.lop << ' ' << x.mail << endl;
            }
        }
    }
}