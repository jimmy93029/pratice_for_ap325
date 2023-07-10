//#include <iostream>
//#include <vector>
//#include <cmath>
//#define ll long long
//using namespace std;
//
//
//ll ans = 0;
//ll n, nsquare;
//ll dr[9] = {-1, 0, 1,-1, 0, 1,-1, 0, 1};
//ll dc[9] = {-1,-1,-1, 0, 0, 0, 1, 1, 1}; 
//   
//
//void exhaustion(ll round, vector<vector<ll>> board);
//int main()
//{
//    cin >> n;
//    nsquare = pow(n, 2);
//    vector<vector<ll>> board;
//    for (int i = 0; i < n; i++) {
//        vector<ll> row;  
//        row.resize(n);
//        board.push_back(row);
//    }
//
//    exhaustion(-1, board);
//
//    cout << ans;
//
//}
//
//
//    vector<vector<ll>>& giveChess(ll num, vector<vector<ll>> board);
//    bool isOffQueen(ll num, vector<vector<ll>>& board);
//void exhaustion(ll round, vector<vector<ll>> board)
//{
//    round++;
//    cout << "round:" << round << "nsquare"<< nsquare<<endl;
//    if (round == n) {
//        cout << "I return";
//        ans++;
//        return;
//    }
//
//    for (int i = 0; i < nsquare; i++)
//    {
//        cout << "l\n";
//        if (isOffQueen(i, board))
//            exhaustion(round, giveChess(i, board));
//    }
//}
//
//
//
//bool isOffQueen(ll num, vector<vector<ll>>& board)
//{
//    ll r = num / n;  ll c = num % n;
//    ll cr, cc;
//    cout << "brj\n";
//    for (int i = 0; i < 9; i++) {
//        cr = r + dr[i]; cc = c + dc[i];
//        if ((-1 < cr < n) && (-1 < cc < n)) {
//            if (board[cr][cc] == 1)
//            {
//                cout << "breaj\n";
//                return false;
//            }
//        }
//    }
//    return true;
//}
//
//vector<vector<ll>>& giveChess(ll num, vector<vector<ll>> board)
//{
//    ll r = num / n;  ll c = num % n;
//    board[r][c] = 1;
//    return board;
//}