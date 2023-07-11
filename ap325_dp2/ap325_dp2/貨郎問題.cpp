/*
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define pll pair<ll, ll> 
using namespace std;

ll n, m, w;
vector<pll> graph[20];
ll visit[20] = { false };

int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> w;
            if (w != 0) {
                graph[i].push_back({ w, j });
            }
        }
        sort(graph[i].begin(), graph[i].end());
    }

    for ()
}
*/