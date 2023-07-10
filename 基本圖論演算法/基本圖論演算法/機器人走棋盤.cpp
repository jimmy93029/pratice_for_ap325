/*
#include <iostream>
#include <algorithm>
#define ll long long
#define oo 100001
using namespace std;

ll m, n, sum = 0;
ll visit[105][105] = { 0 };
ll board[105][105];

int main()
{
    ll min_i = 1, min_j = 1;
    cin >> m >> n;
    for (ll i = 0; i <= m + 1; i++) {
        for (ll j = 0; j <= n + 1; j++) {
            if (i == 0 || i == m + 1 || j == 0 || j == n + 1) {
                board[i][j] == oo;
                visit[i][j] = 1;
            }
            else {
                cin >> board[i][j];
                if (board[i][j] < board[min_i][min_j]) {
                    min_i = i;
                    min_j = j;
                }
            }   
        }
    }

    ll i = min_i, j = min_j, min_;
    while (true)
    {
        sum += board[i][j];
        visit[i][j] = 1;

        min_ = oo;
        if (!visit[i + 1][j] && board[i + 1][j] < min_) {
            min_i = i + 1, min_j = j, min_ = board[i + 1][j];
        }
        if (!visit[i - 1][j] && board[i - 1][j] < min_) {
            min_i = i - 1, min_j = j, min_ = board[i - 1][j];
        }
        if (!visit[i][j + 1] && board[i][j + 1] < min_) {
            min_i = i, min_j = j + 1, min_ = board[i][j + 1];
        }
        if (!visit[i][j - 1] && board[i][j - 1] < min_) {
            min_i = i, min_j = j - 1, min_ = board[i][j - 1];
        }
        i = min_i, j = min_j;

        if (min_ == oo)
            break;
    }

    cout << sum;
}
*/