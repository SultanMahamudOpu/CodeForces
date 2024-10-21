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
    ll n, m, c;
    cin >> n >> m >> c;

    ll an = 2 * n + 2 * m;
    cout << an * c << endl;
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