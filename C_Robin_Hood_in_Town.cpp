#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        long long total_wealth = 0;

        // Read wealths
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            total_wealth += a[i];
        }

        if (n == 1)
        {
            // If there is only one person, it's impossible for anyone to be unhappy.
            cout << -1 << endl;
            continue;
        }

        // Find the wealthiest person
        int max_wealth = *max_element(a.begin(), a.end());

        // Calculate the total wealth needed to make at least half of the population unhappy
        // To make more than half unhappy, the new average must be greater than or equal to max_wealth * n.
        long long required_total_wealth = 2 * max_wealth * (n - 1); // 2 * max_wealth since we are aiming for half the average.

        // Calculate the minimum additional gold needed
        long long x = required_total_wealth - total_wealth;

        // If x is non-negative, it's a valid solution, otherwise it's impossible
        if (x >= 0)
        {
            cout << x << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
