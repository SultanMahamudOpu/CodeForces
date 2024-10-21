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
    ll n;
    cin >> n;
    vector<ll> v;
    vector<ll> u;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        u.push_back(a);
    }

    ll min_v = *min_element(v.begin(), v.end());
    ll min_u = *min_element(u.begin(), u.end());

    ll sum_v = 0, sum_u = 0;
    for (int i = 0; i < n; i++)
    {
        sum_u += u[i];
        sum_v += v[i];
    }

    ll ans = min((min_v * n + sum_u), (min_u * n + sum_v));
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