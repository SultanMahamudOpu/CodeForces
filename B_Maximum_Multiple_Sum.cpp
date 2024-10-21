#include <bits/stdc++.h>
using namespace std;

int sum(int x, int n)
{
    int sum = 0;
    for (int i = 1; i * x <= n; ++i)
    {
        sum += i * x;
    }
    return sum;
}

void solve()
{
    vector<int> v;

    int n;
    cin >> n;

    int m_sum = 0;
    int bestX = 2;

    for (int x = 2; x <= n; ++x)
    {
        int cur = sum(x, n);
        if (cur > m_sum)
        {
            m_sum = cur;
            bestX = x;
        }
    }

    v.push_back(bestX);

    for (int u : v)
    {
        cout << u << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
