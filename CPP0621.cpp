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
    vector<SinhVien> ds;
    SinhVien a;
    
    while (1)
    {
        if (!getline(cin, a.msv)) break;
        if (!getline(cin, a.name)) break;
        if (!getline(cin, a.lop)) break;
        if (!getline(cin, a.mail)) break;

        ds.push_back(a);
    }

    sort(ds.begin(), ds.end(), [](SinhVien &x, SinhVien &y){ 
        return x.msv < y.msv; 
    });

    for(auto &x : ds)
    {
        cout << x.msv << ' ' << x.name << ' ' << x.lop << ' ' << x.mail << endl;
    }
}