#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    int n, m, k, w;
    cin >> n >> m >> k >> w;

    vector<int> heights(w);
    for (int i = 0; i < w; i++)
    {
        cin >> heights[i];
    }

    // Sort the gorilla heights in descending order
    sort(heights.rbegin(), heights.rend());

    // Initialize the grid
    vector<vector<int>> grid(n, vector<int>(m, 0));

    // Fill the grid with the sorted heights
    int idx = 0;
    for (int i = 0; i < n && idx < w; i++)
    {
        for (int j = 0; j < m && idx < w; j++)
        {
            grid[i][j] = heights[idx++];
        }
    }

    // Create a 2D prefix sum array
    vector<vector<ll>> prefixSum(n + 1, vector<ll>(m + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            prefixSum[i][j] = grid[i - 1][j - 1] + prefixSum[i - 1][j] + prefixSum[i][j - 1] - prefixSum[i - 1][j - 1];
        }
    }

    ll maxSpectacle = 0;

    // Calculate the sum of all k x k sub-squares
    for (int i = k; i <= n; i++)
    {
        for (int j = k; j <= m; j++)
        {
            ll currentSpectacle = prefixSum[i][j] - prefixSum[i - k][j] - prefixSum[i][j - k] + prefixSum[i - k][j - k];
            maxSpectacle = max(maxSpectacle, currentSpectacle);
        }
    }

    cout << maxSpectacle << endl;
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
