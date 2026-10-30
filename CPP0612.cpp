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

int x = 1;

string chuanHoa(string s)
{
    for (auto &x : s)
    {
        x = tolower(x);
    }

    string ans = "";
    stringstream ss(s);
    string w;
    while (ss >> w)
    {
        w[0] = toupper(w[0]);
        ans += w;
        ans += ' ';
    }

    return ans;
}

class SinhVien
{
public:
    string name, lop, ma;
    int d, m, y;
    float gpa;

    friend istream &operator>>(istream &in, SinhVien &a)
    {
        a.ma = "B20DCCN";
        string tmp = to_string(x);
        while (tmp.sz() < 3) tmp = '0' + tmp;
        a.ma += tmp;
        cin.ignore();
        getline(in, a.name);
        a.name = chuanHoa(a.name);
        in >> a.lop;
        char c;
        in >> a.d >> c >> a.m >> c >> a.y;
        in >> a.gpa;
        x++;
        return in;
    }

    friend ostream &operator<<(ostream &out, SinhVien a)
    {
        out << a.ma << ' ' << a.name << a.lop << ' '
            << setw(2) << setfill('0') << a.d << "/"
            << setw(2) << setfill('0') << a.m << "/"
            << setw(4) << setfill('0') << a.y << " "
            << fixed << setprecision(2) << a.gpa << endl;
        return out;
    }
};

int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}