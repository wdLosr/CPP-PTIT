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

struct GV
{
    string name, subj, id, ss;
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

string tach(string s)
{
    stringstream ss(s);
    string w;
    vector<string> save;

    while (ss >> w)
    {
        save.pb(w);
    }

    return save.back();
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<GV> ds(n);

    int x = 1;

    for (int i = 0; i < n; ++i)
    {
        ds[i].id = "GV";
        getline(cin, ds[i].name);
        getline(cin, ds[i].subj);
        ds[i].subj = chuanHoa(ds[i].subj);
        ds[i].ss = tach(ds[i].name);

        string tmp = to_string(x);
        while (tmp.size() < 2)
        {
            tmp = '0' + tmp;
        }

        ds[i].id += tmp;
        ++x;
    }

    sort(ds.begin(), ds.end(), [](GV &x, GV &y)
    {
        if(x.ss == y.ss) return x.id < y.id;
        return x.ss < y.ss; 
    });

    for (auto &x : ds)
    {
        cout << x.id << ' ' << x.name << ' ' << x.subj << endl;
    }
}