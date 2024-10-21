#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef long long ll;

int main()
{
    optimize();

    ll n, x;
    cin >> n >> x;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<ll, ll> prefix_count;
    ll current_sum = 0;
    ll count = 0;

    // Initialize with 0 to handle the case where a subarray starts from index 0
    prefix_count[0] = 1;

    for (int i = 0; i < n; i++)
    {
        current_sum += arr[i];

        // Check if there exists a prefix sum that equals current_sum - x
        if (prefix_count.find(current_sum - x) != prefix_count.end())
        {
            count += prefix_count[current_sum - x];
        }

        // Increment the count of the current prefix sum
        prefix_count[current_sum]++;
    }

    cout << count << endl;

    return 0;
}
