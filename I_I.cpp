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
const int q = 1e9 + 7;
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

void solve()
{
    string s;
    cin >> s;
    for (ll i = 0; i < s.length(); i++)
        if (s[i] == 'm' || s[i] == 'w')
        {
            cout << 0 << endl;
            return;
        }
    ll a = 0, b = 1, c = 1;
    for (ll i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1] && (s[i] == 'n' || s[i] == 'u'))
            a = (b + c) % q;
        else
            a = b;
        c = b;
        b = a;
    }
    cout << b << endl;
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