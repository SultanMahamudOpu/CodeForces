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
    ll n, k;
    cin >> n >> k;
    while (n--)
    {
        ll x;
        cin >> x;
        if (x % k == 0)
            cout << 1;
        else
            cout << 0;
    }
}

int main()
{
    optimize();

    ll t;
    cin >> t;

    while (t--)
    {
        solve();
        cout << endl;
    }
}