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
vector<ll> v;
void solve()
{
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        ll up = upper_bound(v.begin(), v.end(), v[i] + 5) - v.begin();
        ll lo = lower_bound(v.begin(), v.end(), v[i]) - v.begin();
        mx = max(mx, (up - lo));
    }
    cout << mx << endl;
}

int main()
{
    optimize();

    ll t = 1;
    // cin>>t;

    while (t--)
    {
        solve();
    }

    return 0;
}