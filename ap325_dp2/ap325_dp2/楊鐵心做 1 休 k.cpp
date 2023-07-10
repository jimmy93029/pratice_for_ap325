//#include <iostream>
//#include <algorithm>
//#include <set>
//#define ll long long
//using namespace std;
//
//ll dp[100001];
//ll reward[100001];
//ll n, k;
//
//class SortedQue{
//    public:
//        void push(ll i);
//        ll getMax();
//    private:
//        ll len = 0;
//        multiset<ll> sortedQue;
//}sortedQue;
//
//void dp_();
//int main()
//{
//    cin >> n >> k;
//
//    for (ll i = 0; i < n; i++)
//        cin >> reward[i];
//
//    dp_();
//
//    cout << *max_element(dp + n - k - 1, dp + n);
//}
//
//void dp_()
//{
//    ll max_;
//
//    for (ll i = 0; i < n; i++)
//    {
//        if (i < k + 1) 
//            dp[i] = reward[i];
//        
//        else {
//            max_ = 0;
//            for (ll j = i - 2 * k; j < i - k; j++)
//                max_ = (dp[j], max_);
//            dp[i] = reward[i] + max_;
//
//
//
//            /* max_ = sortedQue.getMax();
//            dp[i] = max_ + reward[i];*/
//        }
//        /*sortedQue.push(i);*/
//
//        // cout << "  memo[" << i << "] = " << memo[i];
//    }
//}
//
//void SortedQue::push(ll i)
//{
//    if (i >= k) {
//        sortedQue.insert(dp[i - k]);
//        len++;
//    }
//    
//    if (len > k && i >= 2 * k) 
//        sortedQue.erase(dp[i - 2 * k]);
//}
//
//ll SortedQue::getMax()
//{
//    ll max_ = *sortedQue.rbegin();
//    return max_;
//}