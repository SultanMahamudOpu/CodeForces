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
const int N = 4e5 + 123;
ll prfSum[N];

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
ll n, k;
ll arr[N];

bool check(ll mid)
{
    ll sum = 0;
    for (int i = mid + 1; i <= k; i++)
    {
        sum += (n - arr[i]);
    }

    if (sum < arr[mid])
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> arr[i];
    }

    sort(arr + 1, arr + k + 1);

    // for (int i = 1; i <= k; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    ll l = 0, r = k;
    ll ans = -1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;

        if (check(mid))
        {
            // cout << mid << " " << arr[mid] << endl;
            ans = k - mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans + 1 << endl;
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