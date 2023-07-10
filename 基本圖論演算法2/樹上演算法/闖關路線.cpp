/*
#include <iostream>
#include <algorithm>
#include <queue>
#define ll long long
using namespace std;

ll n, P, L, R;
ll B[1000001], d[1000001] = {0}, visit[1000001] = {0};
queue<ll> que;

int main()
{
    cin >> n >> P >> L >> R;
    for (ll i = 0; i < n; i++)
        cin >> B[i];
    
    d[P] = -1;
    visit[0] = 1;
    que.push(0);
    while (!que.empty() && d[P] < 0)
    {
        ll s = que.front();
        que.pop();

        if (s - L >= 0) {
            if (B[s - L] < n && B[s - L] >= 0 && !visit[B[s - L]]) {
                d[B[s - L]] = d[s] + 1;
                visit[B[s - L]] = 1;
                que.push(B[s - L]);
            }
        }
        if (s + R < n) {
            if (B[s + R] < n && B[s + R] >= 0 && !visit[B[s + R]]) {
                d[B[s + R]] =  d[s] + 1;
                visit[B[s + R]] = 1;
                que.push(B[s + R]);
            }
        }
    }

    cout << d[P];
}
*/