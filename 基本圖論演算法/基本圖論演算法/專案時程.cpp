/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define ll long long
using namespace std;

ll kahn_algorithm(vector<ll> graph[1001], ll time[], ll n);
int main()
{
    ll N, n, k, num, ans;

    cin >> N;
    for (ll i = 0; i < N; i++) 
    {
        vector<ll> graph[1001];
        ll time[1001];

        cin >> n;
        for (ll j = 1; j <= n; j++) {
            cin >> time[j];
            cin >> k;
            for (ll z = 0; z < k; z++) {
                cin >> num;
                graph[j].push_back(num);
            }
        }

        cout << kahn_algorithm(graph, time, n) << endl;

    }
}

ll kahn_algorithm(vector<ll> graph[1001], ll time[], ll n)
{
    ll parent, ans = 0;
    ll in_degree[1001] = { 0 };
    queue<ll> que;

    ll max_time[1001] = {0};

    for (ll i = 1; i <= n; i++) 
        for (ll child : graph[i]) {
            in_degree[child]++;
        }

    for (ll i = 1; i <= n; i++)
        if (in_degree[i] == 0) {
            que.push(i);
            max_time[i] = time[i];
        }

    while (!que.empty()) 
    {
        parent = que.front();

        for (ll child : graph[parent]) 
        {
            max_time[child] = max(max_time[child], max_time[parent] + time[child]);

            if (--in_degree[child] == 0)
                que.push(child);
        }

        if (graph[parent].size() == 0) {
            ans = max(ans, max_time[parent]);
            // cout << "ans : " << ans << endl;
        }
    
        que.pop();
    }

    return ans;
}
*/