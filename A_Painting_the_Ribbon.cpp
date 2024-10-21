// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define ff float

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    int max_color = (n + m - 1) / m;

    if (max_color + k >= n)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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