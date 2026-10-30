// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second

using namespace std;

int check(int n)
{
    string s = to_string(n);
    int cnt = 0;

    if (s.size() < 4) return 1;

    else if (s.size() == 4)
    {
        int tmp = 0;
        if (s[0] == s[3]) tmp++;
        if (s[1] == s[2]) tmp++;
        if (tmp != 0) return 1;
        else return 0;
    }

    else if (s.size() == 5)
    {
        int tmp = 0;
        if (s[0] == s[4]) tmp++;
        if (s[1] == s[3]) tmp++;
        if (tmp != 0) return 1;
        else return 0;
    }

    else if(s.size() == 6)
    {
        int tmp = 0;
        if(s[0] == s[5]) tmp++;
        if(s[1] == s[4]) tmp++;
        if(s[2] == s[3]) tmp++;
        if(tmp > 1) return 1;
        else return 0;
    }

    else return 1;
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
        int a, b;
        cin >> a >> b;

        ll cnt = 0;

        for(int i = a; i <= b; ++i)
        {
            if(check(i))
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
}