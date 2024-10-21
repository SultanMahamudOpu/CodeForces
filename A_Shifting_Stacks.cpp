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
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    ll k;
    for (ll i = 0; i < n - 1; i++)
    {
        if (v[i] > i)
        {
            k = v[i] - i;
            v[i + 1] += k;
            v[i] = v[i] - k;
        }
    }

    for (ll i = 0; i < n - 1; i++)
    {
        if (v[i] >= v[i + 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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