//#include <iostream>
//#include <vector>
//#include <algorithm>
//#define ll long long
//using namespace std;
//
//vector<ll> A;
//vector<ll> B;
//
////bool isFound_bSearch(ll lenb, ll target);
////bool isFound_jumpBsearch(ll lenb, ll target);
//ll twoPointer(ll lena, ll lenb, ll k);
//int main()
//{
//    ll lena, lenb, k, num, ans = 0;
//    cin >> lena >> lenb >> k;
//    for (ll i = 0; i < lena; i++) {
//        cin >> num;
//        A.push_back(num);
//    }
//    for (ll i = 0; i < lenb; i++) {
//        cin >> num;
//        B.push_back(num);
//    }
//
//    // 目前為雙指針版本
//    sort(A.begin(), A.end());
//    sort(B.begin(), B.end());
//
//    ans = twoPointer(lena, lenb, k);
//
//    cout << ans;
//}
//
//ll twoPointer(ll lena, ll lenb, ll k)
//{
//    ll j = lenb - 1;
//    ll ans = 0;
//
//    for (int i = 0; i < lena; i++) {
//        while (j > 0 && B[j] > k - A[i])
//            j--;
//        if (B[j] == k - A[i])
//            ans++;
//    }
//
//    return ans;
//}
//
//
//bool isFound_jumpBsearch(ll lenb, ll target)
//{
//    if (B[0] > target)
//        return false;
//
//    ll pos = 0; // 假設 B 以由小到大排序
//
//    for (int jump = lenb / 2; jump > 0; jump /= 2) {
//        while (pos + jump < lenb && B[pos + jump] <= target)
//        {
//            pos = pos + jump;
//            if (B[pos] == target)
//                return true;
//        }
//    }
//    return false;
//}
//
//bool isFound_bSearch(ll lenb, ll target)
//{
//    ll left = 0, right = lenb - 1, mid;
//
//    while (left <= right) {
//        mid = (left + right) / 2;
//        if (target == B[mid])
//            return true;
//        else if (target > B[mid])
//            left = mid + 1;
//        else if (target < B[mid])
//            right = mid - 1;
//    }
//
//    return false;
//}


