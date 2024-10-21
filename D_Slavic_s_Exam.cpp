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
string s, t;
int n, m;

bool check()
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == t[k])
        {
            k++;
        }
        else if (s[i] == '?' && k < m)
        {
            s[i] = t[k];
            k++;
        }
        else if (s[i] == '?' && k >= m)
        {
            s[i] = 'a';
        }
    }

    if (k == m)
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
    cin >> s >> t;
    n = s.size();
    m = t.size();

    if (check())
    {
        cout << "YES" << endl
             << s << endl;
    }
    else
    {
        cout << "NO" << endl;
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