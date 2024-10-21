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
    map<ll, ll> mp;
    ll a[2 * n];
    for (int i = 0, j = 0; i < n; j += 2, i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
        a[j] = x - k;
        a[j + 1] = x + k;
    }
    ll ans = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (mp[a[i]] >= 1)
            ans += mp[a[i]];
    }
    cout << ans / 2 << endl;
}

int main()
{
    optimize();

    solve();
}