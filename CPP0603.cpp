// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

string ch(string s)
{
    stringstream ss(s);
    string res = "", w;
    while (ss >> w)
    {
        res += toupper(w[0]);
        for (int j = 1; j < w.size(); j++)
        {
            res += tolower(w[j]);
        }
        res += " ";
    }
    res.pop_back();
    return res;
}

class SinhVien
{
public:
    string name, lop;
    int d, m, y;
    float gpa;
    friend istream &operator>>(istream &in, SinhVien &A)
    {
        getline(in, A.name);
        cin >> A.lop;
        scanf("%d/%d/%d", &A.d, &A.m, &A.y);
        in >> A.gpa;
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien A)
    {
        out << "B20DCCN001" << " " << ch(A.name) << " " << A.lop << " " 
        << setfill('0') << setw(2) << right << A.d << "/" 
        << setfill('0') << setw(2) << right << A.m << "/" 
        << setfill('0') << setw(4) << right << A.y << " " 
        << fixed << setprecision(2) << A.gpa;
        return out;
    }
};

int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}