/*
#include <iostream>
#include <queue>
#include <algorithm>
#define ll long long
using namespace std;

struct cor
{
    ll x, y;
};

bool comp1(cor i, cor j) { 
    if (i.x < j.x)
        return true;
    else if (i.x == j.x && i.y <= j.y)
        return true;
    else
        return false;
}

struct comp2 {
    bool operator()(cor i, cor j) { return (i.y >= j.y); }
};

ll n;
priority_queue<cor, vector<cor>, comp2> pq;
cor cor_[100000];

int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> cor_[i].x;
    for (ll i = 0; i < n; i++)
        cin >> cor_[i].y;

    sort(cor_, cor_ + n, comp1);

    pq.push(cor_[0]);
    for (ll i = 1; i < n; i++)
    {
        while (!pq.empty() && cor_[i].y >= pq.top().y)
            pq.pop();

        pq.push(cor_[i]);
    }

    cout << pq.size();
}
*/