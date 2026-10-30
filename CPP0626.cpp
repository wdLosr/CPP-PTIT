// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;

struct GV
{
    string name, subj, id;
};

string chuanHoa(string s)
{
    stringstream ss(s);
    string w;
    string nw = "";
    while (ss >> w)
    {
        nw += toupper(w[0]);
    }
    return nw;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<GV> ds(n);

    for (int i = 0; i < n; ++i)
    {
        string id = "GV";
        string tmp = to_string(i + 1);
        if (tmp.size() == 1)
            tmp = "0" + tmp;
        id += tmp;

        ds[i].id = id;

        getline(cin, ds[i].name);

        getline(cin, ds[i].subj);
        ds[i].subj = chuanHoa(ds[i].subj);
    }

    int q;
    cin >> q;
    cin.ignore();

    while (q--)
    {
        string s;
        getline(cin, s);
        s = chuanHoa(s);

        cout << "DANH SACH GIANG VIEN BO MON " << s << ":" << endl;

        for (auto &x : ds)
        {
            if (x.subj == s)
            {
                cout << x.id << " " << x.name << " " << x.subj << endl;
            }
        }
    }
}
