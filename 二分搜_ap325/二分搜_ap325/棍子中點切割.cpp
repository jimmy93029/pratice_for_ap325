//#include <iostream>
//#include <vector>
//#include <cmath>
//#define ll long long
//using namespace std;
//
//ll sum = 0;
//
//void binarysearch(vector<ll> vec);
//void cutthemiddle()
//{
//    ll n, len, num;	 cin >> n >> len;
//    vector<ll> vec;
//
//    vec.push_back(0);
//    for (int i = 0; i < n; i++) {
//        cin >> num;  vec.push_back(num);
//    }
//    vec.push_back(len);
//
//    binarysearch(vec);
//
//    cout << sum;	
//}
//
//
//void binarysearch(vector<ll> vec)
//{
//    ll length = vec.size();
//    if (length <= 2) {
//        return;
//    }
//
//    double middle = ((double)vec.front() + (double)vec.back()) / 2;
//
//    //ll pos = 1;
//    //for (int i = 1; i < length - 1; i++) 
//    //    if (abs(vec[i] - middle) < abs(vec[pos] - middle))
//    //        pos = i;
//    ll pos = lower_bound(vec.begin(), vec.end(), middle) - vec.begin();
//    if (abs(vec[pos - 1] - middle) < abs(vec[pos] - middle))
//        pos= pos - 1;
//
//    sum += (vec.back() - vec.front());
//
//    vector<ll> vec1(vec.begin(), vec.begin() + pos + 1); binarysearch(vec1);  // pos 要加 1, 因為結尾值本身不包含，如果要包含，要取到下一位
//    vector<ll> vec2(vec.begin() + pos, vec.end()); binarysearch(vec2);
//}


