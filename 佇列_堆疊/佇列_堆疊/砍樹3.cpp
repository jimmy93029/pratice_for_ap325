/*
#include <iostream>
#include <queue>
#include <algorithm>
#define ll long long
#define oo 1000000001
using namespace std;

struct tree
{
    ll pos, height;
    bool axed = false;
    ll pre, next;
};

ll sum = 0, maxi = 0;
tree trees[100002];
queue<ll> axed;

void axeTree(ll n);
int main()
{
    ll n, l, num;
    cin >> n >> l;

    trees[0].pos = 0;         trees[0].height = oo;     trees[0].next = 1;
    trees[n + 1].pos = n + 1; trees[n + 1].height = oo; trees[n + 1].pre = n;

    for (ll i = 1; i <= n; i++) {
        cin >> trees[i].pos;
        trees[i].next = i + 1;  
        trees[i].pre = i - 1;
    }
    for (ll i = 1; i <= n; i++) 
        cin >> trees[i].height;
    
    axeTree(n);

    cout << sum << endl << maxi;
}

void axeIt(ll t);
void axeTree(ll n)
{
    for (ll i = 1; i <= n; i++)
        axeIt(i);
    
    while (!axed.empty())
    {
        int t = axed.front();
        axed.pop();
        maxi = max(maxi, trees[t].height);
        sum++;        
        axeIt(trees[t].next);
        axeIt(trees[t].pre);
    }   
}

void axeIt(ll t)
{
    if (trees[t].axed) return;

    ll r = trees[t].next, l = trees[t].pre;
    if (trees[t].pos + trees[t].height <= trees[r].pos 
        || trees[t].pos - trees[t].height >= trees[l].pos) {
        axed.push(t);
        trees[t].axed = true;
        trees[l].next = r;
        trees[r].pre = l;
    }
}
*/