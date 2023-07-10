/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll score[15][15], board[15];
ll n, ans = 0;

void solve();
int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++)
            cin >> score[i][j];
    }

    solve();

    cout << ans;
}

void solve()
{

    for (ll i = 0; i < n; i++)
        board[i] = i;

    do
    {
        cout << "into permutate" << endl;
        ll num = 0;
        bool notonDiagonal = true;
        for (ll i = 0; i < n; i++) {
            for (ll j = i + 1; j < n; j++) {
                ll dis_row = abs(board[j] - board[i]), dis_col = j - i;
                if (dis_row == dis_col) {
                    notonDiagonal = false;
                    break;
                }
            }
            num += score[i][board[i]];
        }

        if (notonDiagonal) {
            ans = max(ans, num);
            cout << "num = " << num << endl;
        }

    } while (next_permutation(board, board + n));
}
*/