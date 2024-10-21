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
bool visited[N];
void solve()
{
    string st;
    cin >> st;

    stack<int> up, lo;
    up.push(-1);
    lo.push(-1);

    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] >= 'a' && st[i] <= 'z' && st[i] != 'b' && st[i] != 'B')
        {
            lo.push(i);
        }
        else if (st[i] >= 'A' && st[i] <= 'Z' && st[i] != 'b' && st[i] != 'B')
        {
            up.push(i);
        }

        if (st[i] == 'b')
        {
            st[i] = '#';
            if (lo.top() != -1)
            {
                st[lo.top()] = '#';
                lo.pop();
            }
        }

        if (st[i] == 'B')
        {
            st[i] = '#';
            if (up.top() != -1)
            {
                st[up.top()] = '#';
                up.pop();
            }
        }
    }

    string ans;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] != '#')
        {
            ans += st[i];
        }
    }
    cout << ans << endl;
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