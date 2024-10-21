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
    vector<int> v;
    for (int i = 0; i < 3; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.rbegin(), v.rend());
    int a = v[0];
    int b = v[1];
    int c = v[2];

    int cnt = 0;

    if (a != 0)
    {
        cnt++;

        a--;
    }
    if (b != 0)
    {
        cnt++;

        b--;
    }
    if (c != 0)
    {
        cnt++;

        c--;
    }
    if (a != 0 && b != 0)
    {
        cnt++;
        a--;
        b--;
    }
    if (a != 0 && c != 0)
    {
        cnt++;
        a--;
        c--;
    }
    if (b != 0 && c != 0)
    {
        cnt++;
        c--;
        b--;
    }
    if (a != 0 && b != 0 && c != 0)
    {
        cnt++;
        a--;
        b--;
        c--;
    }
    // cout << a << " " << b << " " << c << t << endl;
    cout << cnt << endl;
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