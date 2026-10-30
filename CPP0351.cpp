// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

string ChuanHoa(string s)
{
    string res = "";
    stringstream ss(s);
    string w;
    while (ss >> w)
    {
        for (auto &x : w)
        {
            x = tolower(x);
        }
        w[0] = toupper(w[0]);
        res += w + ' ';
    }

    while (!res.empty() && res.back() == ' ')
    {
        res.pop_back();
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cin.ignore();
        string s;
        getline(cin, s);

        string h = ChuanHoa(s);

        if (x == 1)
        {
            vector<string> a;
            stringstream ss(h);
            string w;
            while (ss >> w)
            {
                a.push_back(w);
            }

            int n = a.size();
            cout << a[n - 1];

            for (int i = 0; i < n - 1; ++i)
            {
                cout << " " << a[i];
            }
        }

        if (x == 2)
        {
            vector<string> a;
            stringstream ss(h);
            string w;
            while (ss >> w)
            {
                a.push_back(w);
            }

            int n = a.size();

            for (int i = 1; i < n; ++i)
            {
                cout << a[i] << " ";
            }

            cout << a[0];
        }

        cout << endl;
    }
}