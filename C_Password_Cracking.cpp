#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int t;
    cin >> t; // Read the number of test cases

    while (t--)
    {
        int n;
        cin >> n; // Read the length of the binary string

        string password(n, '0'); // Initialize the password with '0's

        // We will check for all possible substrings of length 1 to n
        for (int i = 0; i < n; ++i)
        {
            // Check if the i-th character is '0' or '1'
            password[i] = '0';                                 // Assume it's '0' first
            cout << "? " << password.substr(0, i + 1) << endl; // Query the current substring
            cout.flush();                                      // Flush the output

            int response;
            cin >> response; // Read the response

            if (response == 0)
            {
                password[i] = '1'; // If it's not a substring, it must be '1'
            }
        }

        // Now we have constructed the password
        cout << "! " << password << endl; // Output the guessed password
        cout.flush();                     // Flush the output
    }
}

int main()
{
    solve();
    return 0;
}
