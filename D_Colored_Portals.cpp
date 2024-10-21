#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<set<char>> portalColor(n + 1); // 1-indexed
        for (int i = 1; i <= n; ++i)
        {
            string colors;
            cin >> colors;
            for (char c : colors)
            {
                portalColor[i].insert(c);
            }
        }

        while (q--)
        {
            int x, y;
            cin >> x >> y;

            // Check if there's any common color
            set<char> commonColors;
            for (char c : portalColor[x])
            {
                if (portalColor[y].count(c))
                {
                    commonColors.insert(c);
                }
            }

            if (commonColors.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << abs(x - y) << endl;
            }
        }
    }

    return 0;
}
