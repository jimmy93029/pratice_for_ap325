//#include <iostream>
//#include <vector>
//#include <stack>
//#define oo 10000001
//#define ll long long
//using namespace std;
//
//vector<ll> heights;
//vector<ll> tiptoe;
//stack<ll> peaks;
//stack<ll> temp;
//
//int main()
//{
//    ll n, num, sum = 0;
//    cin >> n;
//
//    heights.push_back(oo);
//    tiptoe.push_back(0);
//    peaks.push(0);
//
//    for (ll i = 1; i <= n; i++) {
//        cin >> num;
//        heights.push_back(num);
//    }
//    for (ll i = 1; i <= n; i++) {
//        cin >> num;
//        tiptoe.push_back(num);
//    }
//
//    for (ll i = 1; i < n; i++) {
//        while (heights[peaks.top()] <= heights[i])
//            peaks.pop();
//        
//        while (heights[peaks.top()] <= heights[i] + tiptoe[i]) {
//            temp.push(peaks.top());
//            temp.pop();
//        }
//        
//        sum += i - peaks.top() - 1;
//
//        while (!temp.empty()) {
//            peaks.push(temp.top());
//            temp.pop();
//        }     
//
//        peaks.push(i);
//    }
//
//    cout << sum;
//}