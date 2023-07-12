/*
#include <iostream>
#include <vector>
#define ll long long
#define pll pair<ll, ll>
using namespace std;

struct Node
{
    ll i, v;
};

ll n, ans = 0;
Node arr[200001];
pll record[100001];
ll p[200001];

vector<Node> dc(ll l, ll r);
int main()
{
    cin >> n;
    for (ll i = 1; i <= 2 * n; i++) {
        cin >> arr[i].v;
        arr[i].i = i;

        if (record[arr[i].v].first == 0)
            record[arr[i].v].first = i;
        else
            record[arr[i].v].second = i;
    }

    vector<Node> vec = dc(1, 2 * n);

    for (ll i = 1; i <= n; i++) {
        ans += p[record[i].second] - p[record[i].first];
    }

    cout << ans;
}

vector<Node> dc(ll l, ll r)
{
    vector<Node> vec;

    if (l == r) {
        vec.push_back(arr[r]);
        return vec;
    }

    ll mid = (l + r) >> 1, sum = 0, j = 0;
    vector<Node> vec1 = dc(l, mid), vec2 = dc(mid + 1, r);

    for (ll i = 0; i < vec1.size(); i++) 
    {
        while (j < vec2.size() && vec2[j].v <= vec1[i].v) {
            vec.push_back(vec2[j]);
            p[vec2[j].i] += sum;
            j++;
        }
        vec.push_back(vec1[i]);
        sum++;
    }

    while (j < vec2.size()) {
        vec.push_back(vec2[j]);
        p[vec2[j].i] += sum;
        j++;
    }

    return vec;
}
*/