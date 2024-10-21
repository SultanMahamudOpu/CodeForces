// بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

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
    ll n;
    cin >> n;
    ll x = ceil(n / 2.0);
    ll cal = (x * (x + 1)) / 2;
    // cout << x << " " << cal << endl;
    if (n % 2 == 0)
    {
        cout << 2 * cal << endl;
    }
    else
        cout << (2 * cal) - x << endl;
}

int main()
{
    optimize();

    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}