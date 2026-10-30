// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

map<string, int> freq;

string chuanHoa(string s)
{

    vector<string> v;
    stringstream ss(s);
    string w;
    while (ss >> w)
    {
        for (auto &x : w)
        {
            x = tolower(x);
        }
        v.push_back(w);
    }

    int n = v.size();

    string res = "";

    res += v[n - 1];
    v.erase(v.begin() + n - 1);

    for (auto x : v)
    {
        res += x[0];
    }

    freq[res]++;

    if (freq[res] > 1) res += to_string(freq[res]);

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    cin.ignore();
    vector<string> a;
    while (t--)
    {
        string s;
        getline(cin, s);
        string res = chuanHoa(s);
        a.push_back(res);
    }

    for (auto x : a)
    {
        cout << x + "@ptit.edu.vn" << endl;
    }
}