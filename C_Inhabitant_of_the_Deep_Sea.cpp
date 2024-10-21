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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll sm = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sm += a[i];
    }
    if (k >= sm)
    {
        cout << n << endl;
        return;
    }
    ll rem;
    ll ans = 0;
    if (k % 2 == 0)
    {
        rem = k / 2;
        ll pp = rem;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] <= pp)
            {
                pp -= a[i];
                ans++;
            }
            else
            {
                break;
            }
        }
        pp = rem;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] <= pp)
            {
                pp -= a[i];
                ans++;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        rem = k / 2;
        ll pp = rem + 1;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] <= pp)
            {
                pp -= a[i];
                ans++;
            }
            else
            {
                break;
            }
        }
        pp = rem;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] <= pp)
            {
                pp -= a[i];
                ans++;
            }
            else
            {
                break;
            }
        }
    }
    cout << ans << endl;
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