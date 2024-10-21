#include <bits/stdc++.h>
using namespace std;

#define MAX_QUERIES 15000 // Maximum queries allowed

// Function to make a query and get the response
int query(int a, int b)
{
    cout << "? " << a << " " << b << endl;
    fflush(stdout);
    int result;
    cin >> result;
    return result;
}

// Function to find the tree structure
void find_tree(int n)
{
    vector<pair<int, int>> edges;

    // Query pairs of nodes
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            int distance = query(i, j);
            // Process the query response to deduce edges
            // Implementation depends on the logic to determine edges
            // Below is a simplified heuristic approach
            if (distance == 1)
            {
                edges.push_back({i, j});
            }
        }
    }

    // Output the edges
    cout << "!" << endl;
    for (auto &edge : edges)
    {
        cout << edge.first << " " << edge.second << " ";
    }
    cout << endl;
    fflush(stdout);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        find_tree(n);
    }
    return 0;
}
