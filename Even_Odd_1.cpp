#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;

        if (a & 1)
        {
            cout << "odd" << endl;
        }
        else
        {
            cout << "even" << endl;
        }
    }
}