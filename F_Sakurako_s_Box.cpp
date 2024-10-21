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

ll poww(ll x, ll y)
{
    ll ans = 1;
    while (y > 0)
    {
        if (y % 2 == 1)
        {
            ans = (ans * x) % MOD;
        }
        x = (x * x) % MOD;
        y /= 2;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = (sum + arr[i]) % MOD;
    }

    ll sumP = 0;

    for (int i = 0; i < n; i++)
    {
        sum = (sum - arr[i] + MOD) % MOD;
        sumP = (sumP + arr[i] * sum % MOD) % MOD;
    }

    ll np = (n * (n - 1) / 2) % MOD;

    ll inv_np = poww(np, MOD - 2);

    ll ans = (sumP * inv_np) % MOD;
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

    return 0;
}