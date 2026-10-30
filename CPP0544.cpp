// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"
#define sz size
#define all(a) a.begin(), a.end()
#define PI 3.141592653589793238
#define MOD 1000000007

using namespace std;

double canh(double a, double b, double c, double d)
{
    return sqrt((a - c) * (a - c) + (b - d) * (b - d));
}

bool check(double a, double b, double c)
{
    if (a + b <= c)
        return false;
    if (a + c <= b)
        return false;
    if (c + b <= a)
        return false;
    return true;
}

double bkinh(double a, double b, double c)
{
    double r2;
    r2 = ((a * b * c) * (a * b * c)) / ((a + b + c) * (a + b - c) * (a + c - b) * (b + c - a));
    return r2;
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
        double xa, ya, xb, yb, xc, yc;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;
        double AB = canh(xa, ya, xb, yb);
        double AC = canh(xa, ya, xc, yc);
        double BC = canh(xb, yb, xc, yc);
        if (check(AB, BC, AC))
        {
            double ans;
            ans = PI * bkinh(AB, BC, AC);
            cout << fixed << setprecision(3) << ans << endl;
        }
        else
            cout << "INVALID" << endl;
    }
}