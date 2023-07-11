//#include <iostream>
//#include <algorithm>
//#include <string>
//#define ll long long
//using namespace std;
//
//string A, B;
//ll lcs[2][505];
//
//void swap(ll &from, ll &to);
//int main()
//{
//    cin >> A >> B;
//    ll lena = A.length(), lenb = B.length();
//
//    ll from = 0, to = 1;
//
//    for (ll i = 0; i <= lena; i++) {
//        for (ll j = 0; j <= lenb; j++) {
//            ll a_i = i - 1, b_j = j - 1;
//            if (i == 0 || j == 0)
//                lcs[to][j] = 0;
//            else if (A[a_i] == B[b_j])
//                lcs[to][j] = lcs[from][j - 1] + 1;
//            else if (A[a_i] != B[b_j])
//                lcs[to][j] = max(lcs[from][j], lcs[to][j - 1]);
//        }
//        swap(from, to);
//    }
//
//    cout << lcs[from][lenb];
//}
//
//void swap(ll &from, ll &to)
//{
//    ll temp = from;
//    from = to;
//    to = temp;
//}