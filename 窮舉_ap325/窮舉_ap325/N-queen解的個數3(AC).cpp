//#include <iostream>
//#include <cmath>
//#define ll long long
//using namespace std;
//
//ll n, ans = 0;
//
//void tree(ll board[], ll round);
//int main()
//{
//    cin >> n;
//    ll board[10];
//
//    tree(board, -1);
//
//    cout << ans;
//}
//
//
//bool inValid(ll board[], ll round, ll value);
//void tree(ll board[], ll round)
//{
//    round++;
//    if (round >= n) {
//        ans++;
//        return;
//    }
//
//    for (ll i = 0; i < n; i++) 
//    {
//        if (inValid(board, round, i))  continue;
//        board[round] = i;
//        tree(board, round);
//    }
//}
//
//
//bool inValid(ll board[], ll round, ll value)
//{
//    if (round >= 1) {
//        for (ll i = 0; i < round; i++) {
//            if (board[i] == value || (abs(value - board[i]) == round - i))
//                return true;
//        }
//    }
//
//    return false;
//}