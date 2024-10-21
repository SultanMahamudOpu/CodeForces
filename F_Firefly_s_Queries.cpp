#include <iostream>
#include <vector>
using namespace std;

// Function to compute prefix sums
vector<long long> computePrefixSums(const vector<int> &arr)
{
    int n = arr.size();
    vector<long long> prefixSums(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        prefixSums[i + 1] = prefixSums[i] + arr[i];
    }
    return prefixSums;
}

// Function to compute the sum of a subarray
long long getSum(const vector<long long> &prefixSums, int l, int r)
{
    return prefixSums[r] - prefixSums[l - 1];
}

// Function to handle each test case
void handleTestCase()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    // Compute prefix sums for a
    vector<long long> prefixSumsA = computePrefixSums(a);

    // Compute prefix sums for concatenated cyclic shifts
    vector<long long> prefixSumsB(2 * n * n + 1, 0);

    for (int i = 0; i < n; ++i)
    {
        int start = i * n + 1;
        int end = start + n - 1;
        long long shiftSum = prefixSumsA[n] - prefixSumsA[i] + prefixSumsA[i];
        for (int j = start; j <= end; ++j)
        {
            prefixSumsB[j] = prefixSumsB[j - 1] + a[(j - start) % n];
        }
    }

    // Process each query
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << getSum(prefixSumsB, l, r) << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        handleTestCase();
    }

    return 0;
}
