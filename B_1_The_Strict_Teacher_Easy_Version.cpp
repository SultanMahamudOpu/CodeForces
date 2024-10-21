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
    int n, m, q;
    cin >> n >> m >> q;

    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    int qp;
    cin >> qp;
    sort(arr, arr + m);

    if (qp < arr[0])
    {
        cout << arr[0] - 1 << endl;
    }
    else if (qp > arr[m - 1])
    {
        cout << n - arr[m - 1] << endl;
    }
    else
    {
        int a = -1, b = -1;
        for (int i = 0; i < m; i++)
        {
            if (arr[i] <= qp)
            {
                a = arr[i];
            }
        }

        for (int i = m - 1; i >= 0; i--)
        {
            if (arr[i] >= qp)
            {
                b = arr[i];
            }
        }

        int ans = (b - a) / 2;
        cout << ans << endl;
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