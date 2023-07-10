//#include <iostream>
//#define ll long long
//using namespace std;
//
//ll arr[200000] = {0};
//
//int main()
//{
//    ll n, k;
//    cin >> n >> k;
//    for (ll i = 0; i < n; i++)
//        cin >> arr[i];
//
//    ll sum = 0, max = 0, total = 0;
//    //while (left < n && right < n)
//    //{
//    //    while (right < n && sum + arr[right] <= k)
//    //    {
//    //        sum += arr[right];
//    //        if (sum > max) {
//    //            max = sum;
//    //            total = 1;
//    //        }
//    //        else if (sum == max)
//    //            total++;
//    //        right++;
//    //    }
//    //    sum -= arr[left];
//    //    left++;
//    //}
//
//
//    for (ll left = 0, right = 0; left < n; left++) 
//    {
//        while (right < n && sum + arr[right] <= k) {
//            sum += arr[right];
//            right++;
//        }
//
//        right--;
//        if (sum > max) {
//            max = sum;
//            total = 1;
//        }
//        else if (sum == max)
//            total++;
//
//        sum -= arr[left];
//    }
//
//    cout << max << endl << total;
//}


