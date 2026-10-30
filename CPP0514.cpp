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
    string ten, ma;
    int d, m, y;
    float gpa;
};

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

void nhap(SinhVien ds[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cin.ignore();
        getline(cin, ds[i].ten);
        ds[i].ten = chuanHoa(ds[i].ten);
        cin >> ds[i].ma;
        char x;
        cin >> ds[i].d >> x >> ds[i].m >> x >> ds[i].y;
        cin >> ds[i].gpa;
    }
}

void in(SinhVien ds[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        string id = "B20DCCN";
        string so = to_string(i + 1);
        while (so.sz() < 3)
        {
            so = "0" + so;
        }

        id += so;

        cout << id << ' ' << ds[i].ten << ds[i].ma << ' '
             << setw(2) << setfill('0') << right << ds[i].d << "/"
             << setw(2) << setfill('0') << right << ds[i].m << "/"
             << setw(4) << setfill('0') << right << ds[i].y << ' '
             << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}