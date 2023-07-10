/*
#include <iostream>
#include <queue>
#include <algorithm>
#define ll long long
using namespace std;

ll n, root, sum = 0;
queue<ll> que;
ll parent_[100001] ={0};
ll deg[100001];
ll h[100001] = {0};


int main()
{
    cin >> n;

    ll k, child, parent;
    for (ll i = 1; i <= n; i++) 
    {
        cin >> k;
        deg[i] = k;

        for (ll j = 0; j < k; j++) {
            cin >> child;
            parent_[child] = i;
        }
        if (k == 0)
            que.push(i);
    }

    while (1) 
    {
        child = que.front();
        parent = parent_[child];

        que.pop();
        sum += h[child];

        h[parent] = max(h[parent], h[child] + 1);

        if (--deg[parent] == 0)
            que.push(parent);

        if (parent == 0) {
            root = child;
            break;
        }   
    }

    cout << root << endl << sum;
}
*/