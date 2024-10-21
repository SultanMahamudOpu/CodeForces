// بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

void solve()
{
    int n, b, c;
    cin >> n >> b >> c;
    vector<int> v, x;
    for (int i = 0; i < n * n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
            {
                a[i][j] = v[0];
            }
            else if (j == 0)
            {
                a[i][j] = a[i - 1][j] + b;
            }
            else
            {
                a[i][j] = a[i][j - 1] + c;
            }
            x.push_back(a[i][j]);
        }
    }
    sort(x.begin(), x.end());
    int flag = 0;
    for (int i = 0; i < n * n; i++)
    {
        if (v[i] != x[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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