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
    int n;
    cin >> n;
    string st;
    cin >> st;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    map<char, int> odd;
    map<char, int> even;
    map<char, int> m;
    for (int i = 0; i < st.size(); i++)
    {
        m[st[i]]++;
    }

    int cnt = 0;
    if (n % 2 != 0)
    {
        
    }

    for (int i = 0; i < st.size(); i += 2)
    {
        even[st[i]]++;
    }

    for (int i = 1; i < st.size(); i += 2)
    {
        odd[st[i]]++;
    }

    int eMax = 0;
    int oMax = 0;
    int eCnt = 0;
    int oCnt = 0;

    for (auto u : even)
    {
        eMax = max(u.second, eMax);
        eCnt += u.second;
    }

    for (auto u : odd)
    {
        oMax = max(u.second, oMax);
        oCnt += u.second;
    }

    cnt += (eCnt - eMax) + (oCnt - oMax);

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