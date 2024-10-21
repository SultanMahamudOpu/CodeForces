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
    int n;
    cin >> n;
    int m[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
    }

    int primary = 0, secondary = 0;
    for (int i = 0; i < n; i++)
    {
        primary += m[i][i];
    }

    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        secondary += m[i][j];
    }

    cout << abs(primary - secondary) << endl;
}

int main()
{
    optimize();

    int t = 1;
    // cin>>t;

    while (t--)
    {
        solve();
    }
}