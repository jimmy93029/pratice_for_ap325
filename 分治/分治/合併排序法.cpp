//#include <iostream>
//#include <vector>
//#define ll long long
//using namespace std;
//
//
//vector<ll> mergeSort(vector<ll> vec);
//int main()
//{
//    vector<ll> vec = { 1, 8, 3, 5, 2, 4, 1, 7, 6 };
//    vector<ll> sorted = mergeSort(vec);
//
//    for (auto& v : sorted)
//        cout << v << ' ';
//}
//
//
//vector<ll> mergeSort(vector<ll> vec)
//{
//    ll len = vec.size(), mid = len / 2;
//    if (len == 1)
//        return vec;
//
//    vector<ll> left(vec.begin(), vec.begin() + mid);    left = mergeSort(left);
//    vector<ll> right(vec.begin() + mid, vec.end());    right = mergeSort(right);
//    vector<ll> sorted;
//
//    ll i = 0, j = 0;
//    while (i < mid && j < len - mid)
//    {
//        if (left[i] <= right[j]) {
//            sorted.push_back(left[i++]);
//        }
//        else 
//            sorted.push_back(right[j++]);
//    }
//    while (i < mid)
//        sorted.push_back(left[i++]);
//
//    while (j < len - mid)
//        sorted.push_back(right[j++]);
//
//    return sorted;
//}