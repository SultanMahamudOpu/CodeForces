#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int countRightTriangles(const vector<pair<int, int>> &points)
{
    unordered_map<int, int> x_count;
    unordered_map<int, int> y_count;
    int n = points.size();

    // Count frequency of x-coordinates and y-coordinates
    for (const auto &point : points)
    {
        x_count[point.first]++;
        y_count[point.second]++;
    }

    int right_triangle_count = 0;

    // Calculate the number of right triangles
    for (const auto &point : points)
    {
        int x = point.first;
        int y = point.second;
        right_triangle_count += (x_count[x] - 1) * (y_count[y] - 1);
    }

    return right_triangle_count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> points(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> points[i].first >> points[i].second;
        }

        cout << countRightTriangles(points) << endl;
    }
    return 0;
}
