//#include <iostream>
//#include <vector>
//#include <stack>
//#define me i
//#define ll long long
//#define oo 10000001
//using namespace std;
//
//vector<ll> mounts;
//stack<ll> peaks;
//
//int main()
//{
//    ll n, num, sum = 0;
//    cin >> n;
//
//    mounts.push_back(oo);
//    peaks.push(0);
//    for (ll i = 1; i <= n; i++) {
//        cin >> num;
//        mounts.push_back(num);
//    }
//
//    for (ll i = 1; i <= n; i++) {
//        while (mounts[peaks.top()] <= mounts[me]) {
//            peaks.pop();
//        }
//        sum += i - peaks.top();
//        peaks.push(i);
//    }
//
//    cout << sum;
//}

