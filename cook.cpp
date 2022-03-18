#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool buy[n + 1] = {false};
        vector<int> v[n + 1];
        unordered_map<int, int> ump;
        for (int i = 0; i < p; i++)
        {
            int u, v;
            cin >> u >> v;

            v[u].push_back(a[v - 1]);
            v[v].push_back(a[u - 1]);
        }
        for (int i = 1; i <= n; i++)
        {
            v[i].push_back(v[i - 1]);
        }

        int cost = 0;

        for (int i = 0; i < n; i++)
        {
            sort(v[i], v[i] + v[i].size());
            int m = v[i].size();
            for (int j = 0; j < m / 2 && m > 1; j++)
            {
                cost += 2 * v[i][j];
            }
            if (m == 1)
                cost += v[i][0];
            if (m % 2 != 0)
                cost += v[i][m / 2 + 1];
        }
    }
}
