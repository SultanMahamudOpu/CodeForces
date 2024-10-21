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
    long long int i, n, m, l = 0, g = 0, t;

    cin >> n >> m;
    l = 2 * m * n - m - n;
    g = m * n;
    if (g >= l)
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