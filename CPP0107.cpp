// wdLosr - Le Loc
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    string MA101 = "ABBADCCABDCCABD", MA102 = "ACCABCDDBBCDDBB";
    while (t--)
    {
        string x;
        cin >> x;
        double kq = 0;
        if (x == "101")
        {
            int cnt = 0;
            for (int i = 0; i < 15; ++i)
            {
                char tmp;
                cin >> tmp;
                if (tmp == MA101[i])
                {
                    cnt++;
                }
            }
            kq = (1.0 * cnt * 10) / 15;
        }
        else
        {
            int cnt = 0;
            for (int i = 0; i < 15; ++i)
            {
                char tmp;
                cin >> tmp;
                if (tmp == MA102[i])
                {
                    cnt++;
                }
            }
            kq = (1.0 * cnt * 10) / 15;
        }
        cout << fixed << setprecision(2) << kq << '\n';
    }
}