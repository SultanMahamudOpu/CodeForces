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
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll cnt = 0;
    ll mx = 0;

    ll f = 0, l = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            f++;
        }
        else
        {
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == 1)
        {
            l++;
        }
        else
        {
            break;
        }
    }
    ll mm = 0;
    if (f == n || l == n)
    {
        mm = n;
    }
    else
    {
        mm = f + l;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            mx++;
        }
        else
        {
            mx = 0;
        }

        cnt = max(mx, cnt);
    }

    ll ans = max(cnt, mm);
    cout << ans << endl;
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