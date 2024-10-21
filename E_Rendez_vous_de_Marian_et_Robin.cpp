//* Bismillahir Rahmanir Rahim *\

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define mem(arr, k) memset(arr, k, sizeof(arr))
#define MOD 1000000007
#define sqr(a) ((a) * (a))
#define endl "\n"
typedef long long ll;
typedef double dd;
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
const int N = 2e5 + 123;

vector<pair<int, int>> adj[N];
bool hasHorse[N];
ll distMarian[N], distRobin[N];

void dijkstra(int start, ll dist[], int n)
{
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    fill(dist, dist + n + 1, infLL);
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty())
    {
        ll d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d != dist[u])
            continue;

        for (auto edge : adj[u])
        {
            int v = edge.first;
            ll w = edge.second;
            if (hasHorse[u])
                w /= 2;

            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

void solve()
{
    int n, m, h;
    cin >> n >> m >> h;

    fill(hasHorse, hasHorse + n + 1, false);
    for (int i = 0; i < h; ++i)
    {
        int x;
        cin >> x;
        hasHorse[x] = true;
    }

    for (int i = 1; i <= n; ++i)
    {
        adj[i].clear();
    }

    for (int i = 0; i < m; ++i)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }

    dijkstra(1, distMarian, n);
    dijkstra(n, distRobin, n);

    ll earliestMeetingTime = infLL;
    for (int i = 1; i <= n; ++i)
    {
        earliestMeetingTime = min(earliestMeetingTime, max(distMarian[i], distRobin[i]));
    }

    if (earliestMeetingTime == infLL)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << earliestMeetingTime << endl;
    }
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
