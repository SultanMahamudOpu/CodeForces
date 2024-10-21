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

void solve()
{
    int n, d, k;
    cin >> n >> d >> k;

    vector<int> jobs(n + 1, 0);

    for (int i = 0; i < k; ++i)
    {
        int l, r;
        cin >> l >> r;
        jobs[l]++;
        if (r + 1 <= n)
            jobs[r + 1]--;
    }

    // Calculate prefix sums to get the number of jobs on each day
    for (int i = 1; i <= n; ++i)
    {
        jobs[i] += jobs[i - 1];
    }

    int maxOverlap = -1, minOverlap = inf;
    int bestStartBrother = 1, bestStartMother = 1;

    for (int i = 1; i <= n - d + 1; ++i)
    {
        int overlap = 0;
        for (int j = i; j < i + d; ++j)
        {
            overlap += jobs[j];
        }

        if (overlap > maxOverlap)
        {
            maxOverlap = overlap;
            bestStartBrother = i;
        }

        if (overlap < minOverlap)
        {
            minOverlap = overlap;
            bestStartMother = i;
        }
    }

    cout << bestStartBrother << " " << bestStartMother << endl;
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
