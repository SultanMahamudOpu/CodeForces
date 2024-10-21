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
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

void solve()
{
    string s;
    cin >> s;

    vector<pair<int, int>> v(s.size());

    v[0] = make_pair(0, 0);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == '(')
        {
            v[i] = make_pair(v[i - 1].first + 1, i);
        }
        else
        {
            v[i] = make_pair(v[i - 1].first - 1, i);
        }
    }

    sort(v.begin(), v.end(), cmp);

    string ans;

    for (int i = 0; i < v.size(); i++)
    {
        ans += s[v[i].second];
    }

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