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
const int N = 2e6 + 123;
ll prfSum[N];

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

void solve()
{
    int n;
    cin >> n;
    int arr[n + 12];
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        arr[i] = sum + a;
        sum += a;
    }

    int ans[sum + 12];
    int k = 1, j = 1;

    for (int i = 1; i <= sum; i++)
    {
        ans[i] = k;
        if (i == arr[j])
        {
            j++;
            k++;
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int a;
        cin >> a;
        cout << ans[a] << endl;
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