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
    ll x, y, a, b;
    cin >> x >> y >> a >> b;

    if (x == 0 && y == 0)
    {
        cout << 0 << endl;
    }
    else if (x == 0 || y == 0)
    {
        ll mx = max(x, y);
        cout << mx * a << endl;
    }
    else if (x == y)
    {
        ll c1 = (x + y) * a;
        ll c2 = x * b;

        cout << min(c1, c2) << endl;
    }
    else
    {
        ll c1 = (x + y) * a;

        ll mn = min(x, y);
        ll mx = max(x, y);

        ll c2 = (mn * b) + (mx - mn) * a;

        cout << min(c1, c2) << endl;
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