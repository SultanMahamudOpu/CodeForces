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

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        v.push_back(a);
    }

    string s;
    cin >> s; // Color array (0 = black, 1 = white)

    vector<int> F(n, 0);            // Result array to store F(i)
    vector<bool> visited(n, false); // To keep track of visited elements

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            // Find the cycle starting from element i
            vector<int> cycle;
            int x = i;
            while (!visited[x])
            {
                visited[x] = true;
                cycle.push_back(x);
                x = v[x];
            }

            // Count the black elements in the cycle
            int black_count = 0;
            for (int index : cycle)
            {
                if (s[index] == '0')
                {
                    black_count++;
                }
            }

            // Set F(i) for all elements in the cycle
            for (int index : cycle)
            {
                F[index] = black_count;
            }
        }
    }

    // Output the result for this test case
    for (int i = 0; i < n; i++)
    {
        cout << F[i] << " ";
    }
    cout << endl;
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