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
    int n, i, a = 0;
    string s1, s2;
    set<char> s;
    vector<char> v;
    vector<char>::iterator it;
    cin >> n;
    cin >> s1;
    for (i = 0; i < n; i++)
    {
        s.insert(s1[i]);
        if (s.size() > a)
        {
            v.push_back(s1[i]);
            a = s.size();
        }
        if (s.size() == 2)
        {
            for (it = v.begin(); it != v.end(); it++)
            {
                s2.push_back(*it);
            }
            s.clear();
            v.clear();
            a = 0;
        }
    }
    cout << n - s2.size() << endl
         << s2 << endl;
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