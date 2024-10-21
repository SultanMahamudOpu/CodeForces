#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t; // Read number of test cases

    while (t--)
    {
        int n;
        cin >> n; // Read length of the strip

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i]; // Read array of integers
        }

        string s;
        cin >> s; // Read the string of 'L' and 'R'

        long long totalScore = 0;
        vector<bool> used(n, false); // To mark the used cells

        // Step 1: Identify all valid L-R pairs and sum the values between them
        for (int l = 0; l < n; ++l)
        {
            if (s[l] == 'L')
            {
                for (int r = l + 1; r < n; ++r)
                {
                    if (s[r] == 'R')
                    {
                        // Perform an operation: sum the values from a[l] to a[r]
                        for (int i = l; i <= r; ++i)
                        {
                            if (!used[i])
                            {
                                totalScore += a[i];
                                used[i] = true; // Mark the position as used
                            }
                        }
                        break; // Continue with the next possible pair
                    }
                }
            }
        }
        // Output the maximum possible score
        cout << totalScore << endl;
    }

    return 0;
}
