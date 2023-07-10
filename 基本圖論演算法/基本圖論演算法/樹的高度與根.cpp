/*
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

ll n, root, ans = 0;
vector<ll> tree[100002];
ll findroot[100000] = {0};

ll dfs(ll root);
int main()
{
    cin >> n;

    ll k, num;
    for (ll i = 1; i <= n; i++) {
        cin >> k;
        for (ll j = 0; j < k; j++) {
            cin >> num;
            tree[i].push_back(num);
            findroot[num] = 1;
        }
    }

    for (ll i = 1; i <= n; i++)
        if (findroot[i] == 0)
            root = i;    

    ll temp = dfs(root);

    cout << root<< endl << ans;
}

ll dfs(ll parent)
{
    ll hight = 0;

    for (ll child : tree[parent]) {     
        hight = max(hight, dfs(child));  
    }

    ans += hight;

    return hight + 1;
}
*/