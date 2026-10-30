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

void chuanhoa(string &s)
{
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.sz(); ++i) s[i] = tolower(s[i]);
}

class SinhVien
{
public:
    string name, classes;
    int ngay, thang, nam, ma;
    float gpa;
    friend istream &operator>>(istream &in, SinhVien &A)
    {
        scanf("\n");
        string tmp;
        getline(in, tmp);
        A.name = "";
        stringstream ss(tmp);
        while (ss >> tmp)
        {
            chuanhoa(tmp);
            A.name += (tmp + ' ');
        }
        A.name.pop_back();
        in >> A.classes;
        scanf("%d/%d/%d", &A.ngay, &A.thang, &A.nam);
        in >> A.gpa;
        A.ma = x++;
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien A)
    {
        out << "B20DCCN" << setfill('0') << setw(3) << A.ma << ' ' << A.name << ' ' << A.classes << ' ' << setfill('0') << setw(2) << right << A.ngay << '/' << setfill('0') << setw(2) << right << A.thang << '/' << setfill('0') << setw(4) << right << A.nam << ' ' << fixed << setprecision(2) << A.gpa << endl;
        return out;
    }
};

void sapxep(SinhVien ds[], int N)
{
    sort(ds, ds + N, [](SinhVien a, SinhVien b)
         { return a.gpa > b.gpa; });
}

int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    sapxep(ds, N);
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}