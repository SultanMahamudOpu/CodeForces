//* Bismillahir Rahmanir Rahim *\

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{ // TODO Code
    int n, m;
    cin >> n >> m;
    char mtx[n][m];

    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        for (int j = 0; j < m; j++)
        {
            mtx[i][j] = st[j];
        }
    }

    int row = 0, col = 0;
    int cnt_r = 0;
    int cnt_c = 0;
    int max_r = -1;
    int max_c = -1;

    for (int i = 0; i < n; i++)
    {
        cnt_r = 0;
        for (int j = 0; j < m; j++)
        {
            if (mtx[i][j] == '#')
            {
                cnt_r++;
            }
        }
        if (cnt_r > max_r)
        {
            max_r = cnt_r;
            row = i;
        }
    }

    for (int i = 0; i < m; i++)
    {
        cnt_c = 0;
        for (int j = 0; j < n; j++)
        {
            if (mtx[j][i] == '#')
            {
                cnt_c++;
            }
        }
        if (cnt_c > max_c)
        {
            max_c = cnt_c;
            col = i;
        }
    }

    cout << row + 1 << " " << col + 1 << endl;
}

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}