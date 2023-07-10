//#include <iostream>  // #include <bits/stdc++.h>
//#include <algorithm>
//#include <string>
//#include <vector>
//#define ll long long
//using namespace std;
//
//struct Point
//{
//    ll y;
//    ll maxL = 0;
//};
//
//bool comp(ll i, Point j) { return (i < j.y); }
//
//vector<vector<Point>> cor;
//string A, B;
//ll maxLen = 0;
//
//void dfs(ll x, ll y, ll len);
//int main()
//{
//    cin >> A >> B;
//
//    for (ll i = 0; i < A.length(); i++) {
//        vector<Point> vec;
//        for (ll j = 0; j < B.length(); j++) {
//            if (B[j] == A[i]) {
//                Point point;
//                point.y = j;
//                vec.push_back(point);
//            }
//                
//        }
//        if (!vec.empty())
//            cor.push_back(vec);
//    }
//
//    for (ll x_i = 0; x_i < cor.size(); x_i++) {
//        cor[x_i][0].maxL = 1;
//        dfs(x_i, cor[x_i][0].y, 0);
//    }
//
//    cout << maxLen;
//}
//
//
//void dfs(ll x, ll y, ll len)
//{
//    len++;  
//
//    if (x >= cor.size()) {
//        maxLen = max(len, maxLen);
//        return;
//    }
//
//    bool isHighest = true;
//    for (ll x_i = x + 1; x_i < cor.size(); x_i++) {
//        auto iter_y = upper_bound(cor[x_i].begin(), cor[x_i].end(), y, comp);
//        if (iter_y != cor[x_i].end() && len + 1 > iter_y->maxL) {
//            isHighest = false; 
//            iter_y->maxL = len + 1;
//            ll y_i = iter_y->y;
//            dfs(x_i, y_i, len);
//        }
//    }
//    if (isHighest) {
//        maxLen = max(len, maxLen);
//        return;
//    }
//}