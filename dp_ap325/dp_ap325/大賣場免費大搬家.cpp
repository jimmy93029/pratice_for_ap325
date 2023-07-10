/*
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

ll n, w_max;
ll weight[105];
ll value[105];
ll dp[2][100005];
// ll dp[105][100005]; // 產生了 典型的 stack overflow 的問題 : segmentation fault (core dumped)
ll isInpack[105][100005];

void swap(ll& i, ll& j)
{
    ll temp = i;
    i = j;
    j = temp;
}

int main()
{

    cin >> n >> w_max;
    weight[0] = 0;
    value[0] = 0;
    for (ll i = 1; i <= n; i++)
        cin >> weight[i];
    for (ll i = 1; i <= n; i++)
        cin >> value[i];

    ll from = 0, to = 1;
    for (ll i = 0; i <= n; i++) {
        for (ll w = 0; w <= w_max; w++) {
            if (i == 0 || w == 0)
                dp[to][from] = 0;
            else if (w < weight[i])
                dp[to][w] = dp[from][w];
            else {
                if (value[to] + dp[from][w - weight[to]] > dp[from][w]) {
                    dp[to][w] = value[to] + dp[from][w - weight[to]];
                    isInpack[i][w] = 1;
                }
                else
                    dp[to][w] = dp[from][w];
            }
        }
        swap(from, to);
    }

    std::cout << dp[from][w_max] << endl;

    ll w = w_max;
    for (ll i = n; i > 0; i--) {
        if (isInpack[i][w]) {
            cout << i << ' ';
            w = w - weight[i];
        }
            
    }
    cout << "is in pack";

}
*/