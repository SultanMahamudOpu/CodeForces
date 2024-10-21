//* Bismillahir Rahmanir Rahim *\

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define mem(arr, k) memset(arr, k, sizeof(arr))
#define MOD 1000000007
#define sqr(a) ((a) * (a))
#define endl "\n"
typedef long long ll;
typedef double dd;
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
const int N = 2e5 + 123;
ll prfSum[N];

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

void solve()
{
    ll n, f, k;
    cin >> n >> f >> k;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }

    ll c = v[f - 1];
    sort(v.rbegin(), v.rend());

    ll t = 0, tt = 0;
    for (int i = 0; i < k; i++)
    {
        if (v[i] == c)
        {
            t = 1;
        }
    }

    if (t == 0)
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = k; i < n; i++)
    {
        if (v[i] == c)
        {
            tt = 1;
        }
    }

    if (tt == 1)
    {
        cout << "MAYBE" << endl;
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

    return 0;
}