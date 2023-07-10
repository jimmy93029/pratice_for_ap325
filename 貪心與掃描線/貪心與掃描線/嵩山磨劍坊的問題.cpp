/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

struct task
{
    ll time, weight;
};

bool comp(task i, task j) { return (i.time * j.weight < j.time* i.weight); };

int main()
{
    task tasks[100000], task_;
    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++) {
        cin >> task_.time;
        tasks[i] = task_;
    }
    for (ll i = 0; i < n; i++) 
        cin >> tasks[i].weight;
    
    sort(tasks, tasks + n, comp);

    ll time = 0, ans = 0;
    for (ll i = 0; i < n; i++) {
        time += tasks[i].time;
        ans += tasks[i].weight * time;
    }

    cout << ans;
}
*/