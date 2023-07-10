//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cmath>
//#define ll long long
//using namespace std;
//
//ll n;
//ll ans;
//vector<ll> board;
//
//void permutation();
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        board.push_back(i);
//
//    permutation();
//
//    cout << ans;
//}
//
//
//void permutation()
//{
//    do {
//        bool notondiagonal = true;
//        ll distcol, distrow;
//        for (int i = 0; i < n; i++) {
//            for (int j = i + 1; j < n; j++) {
//                distcol = abs(board[j] - board[i]);  distrow = j - i;
//                if (distcol == distrow) {
//                    notondiagonal = false;
//                    break;
//                }
//            }
//        }
//        if (notondiagonal)
//            ans++;
//    } while (next_permutation(board.begin(), board.begin() + n));
//}