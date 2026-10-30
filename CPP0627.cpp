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

struct GiangVien
{
    string hoTen, boMon;
    string stt;
};

string chuanHoa(string &s)
{
    string res = "";
    stringstream ss(s);
    string w;
    while (ss >> w)
    {
        res += toupper(w[0]);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<GiangVien> ds(n);
    for (int i = 0; i < n; ++i)
    {
        getline(cin, ds[i].hoTen);
        getline(cin, ds[i].boMon);
        ds[i].boMon = chuanHoa(ds[i].boMon);
        ds[i].stt = "GV";
        int tmp = i + 1;
        string so = to_string(tmp);
        while (so.size() < 2)
        {
            so = '0' + so;
        }
        ds[i].stt += so;
    }
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
        for (int i = 0; i < s.size(); ++i) s[i] = tolower(s[i]);
        for (auto x : ds)
        {
            string tmp = x.hoTen;
            transform(all(tmp), tmp.begin(), ::tolower);
            if (tmp.find(s) != -1)
            {
                cout << x.stt << ' ' << x.hoTen << ' ' << x.boMon << endl;
            }
        }
    }
}
