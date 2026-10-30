// wdLosr - Le Loc
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a1[n + 5][m + 5], a2[n + 5][m + 5];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a1[i][j];
                a2[i][j] = a1[i][j];
            }
        }
        int tren = 0, duoi = n - 1;
        int trai = 0, phai = m - 1;
        while (tren <= duoi && trai <= phai)
        {
            for (int i = trai + 1; i <= phai; ++i)
            {
                a2[tren][i] = a1[tren][i - 1];
            }
            for (int i = tren + 1; i <= duoi; ++i)
            {
                a2[i][phai] = a1[i - 1][phai];
            }
            if (trai <= phai)
            {
                for (int i = phai - 1; i >= trai; --i)
                {
                    a2[duoi][i] = a1[duoi][i + 1];
                }
            }
            if (tren <= duoi)
            {
                for (int i = duoi - 1; i >= tren; --i)
                {
                    a2[i][trai] = a1[i + 1][trai];
                }
            }
            tren++;
            duoi--;
            trai++;
            phai--;
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cout << a2[i][j] << " ";
            }
        }
        cout << endl;
    }
}