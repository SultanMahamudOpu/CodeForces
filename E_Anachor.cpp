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
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.rbegin(), v.rend());
    ll tempa, tempb;
    ll last = v[0].first;
    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i].second <= last)
        {
            last = v[i].first;
            ans++;
        }
    }
    cout << ans + 1 << endl;
}

int main()
{
    optimize();

    // int t = 1;
    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}