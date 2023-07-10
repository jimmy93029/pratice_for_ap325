/*
#include <iostream>
#define ll long long
using namespace std;

ll n, ans = 0;
bool valid[100];

void tree(ll k, ll board[]);
int main()
{
    cin >> n;
    ll board[100];
    tree(0, board);

    cout << ans;
}


void tree(ll k, ll board[])
{
    if (k >= n) {
        ans++;
        return;
    }

    for (ll i = 0; i < n; i++)
        valid[i] = true;
    
    ll y;
    for (ll i = 0; i < k; i++) 
    {
        valid[board[i]] = false;

        y = board[i] + 1 * (k - i);    
        if (y < n) valid[y] = false;

        y = board[i] - 1 * (k - i);   
        if (y >= 0) valid[y] = false;
    }

    for (ll i = 0; i < n; i++) {
        if (valid[i]) {
            board[k] = i;
            tree(k + 1, board);
        }
    }
}
*/