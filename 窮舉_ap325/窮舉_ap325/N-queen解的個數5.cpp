/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll n, ans = 0, j;

void tree(ll i, ll board[], bool valid[]);
int main()
{
    ll board[15];
    bool valid[15];
    cin >> n;
    
    tree(0, board, valid);

    cout << ans;
}

void tree(ll i, ll board[], bool valid[])
{
    cout << "into tree" << endl;
    if (i >= n) {
        ans++;
        return;
    }

    for (ll j = 0; j < n; j++)
        valid[j] = true;
    
    for (ll k = 0; k < i; k++) 
    {
        valid[board[k]] = false;

        j = i - k + board[k];
        if (j < n)
            valid[j] = false;

        j = -(i - k) + board[k];
        if (j >= 0)
            valid[j] = false;
    }

    for (ll j = 0; j < n; j++) {
        if (valid[j]) {
            board[i] = j;
            tree(i + 1, board, valid);
            board[i] = 0;
        }
    }
}
*/