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
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < 2 * n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.rbegin(), v.rend());

    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += v[i];
    }
    for (int i = n; i < 2 * n; i++)
    {
        sum2 += v[i];
    }

    if (sum1 == sum2)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < 2 * n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    optimize();

    int t = 1;
    // cin>>t;

    while (t--)
    {
        solve();
    }

    return 0;
}