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
ll dor[N];
ll room[N];
ll n, m;
void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> dor[i];
    }

    for (int i = 1; i <= n; i++)
    {
        prfSum[i] = prfSum[i - 1] + dor[i];
    }

    while (m--)
    {
        ll a;
        cin >> a;

        ll l = 0, r = n;
        ll ans = -1, ro = -1;

        while (l <= r)
        {
            ll mid = (l + r) / 2;

            if (prfSum[mid] >= a)
            {
                ans = mid;
                ro = a - prfSum[mid - 1];
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << " " << ro << endl;
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