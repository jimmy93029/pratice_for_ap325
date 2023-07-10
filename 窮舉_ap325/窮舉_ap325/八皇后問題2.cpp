#include <iostream>
#include <vector>
#define ll long long
using namespace std;

ll n, ans = 0;

void rec(vector<ll> chess, ll round);
int main()
{
    cin >> n;
    vector<ll> chess;
    chess.resize(n);

    rec(chess, 0);

    cout << ans << "\n";
}


void rec(vector<ll> chess, ll round)
{
    if (round >= n){
        ans++;
        return;
    }

    vector<ll> valid;
    valid.resize(n, 1);

    ll pos1, pos2;
    for (ll i = 0; i < round; i++) {
        valid[chess[i]] = 0;  // 同一列也會被皇后攻擊到 
        pos1 = chess[i] + round - i;
        pos2 = chess[i] - (round - i);
        if (pos1 < n)
            valid[pos1] = 0;
        if (pos2 >= 0)
            valid[pos2] = 0;
    }

    for (ll i = 0; i < n; i++){
        if (valid[i]) {
            chess[round] = i;
            rec(chess, round + 1);
        }
    }
}


