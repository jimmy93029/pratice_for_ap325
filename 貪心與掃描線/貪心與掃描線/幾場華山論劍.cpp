//#include <iostream>
//#include <algorithm>
//#define ll long long
//using namespace std;
//
//struct event
//{
//    ll start;
//    ll end;
//};
//
//bool comp(event i, event j) { return (j.end > i.end); };
//
//event events[100000];
//
//int main()
//{
//    ll n, s, t, ans = 0;
//    cin >> n;
//
//    event activity;
//    for (ll i = 0; i < n; i++) {
//        cin >> s >> t;
//        activity.start = s;
//        activity.end = t;
//        events[i] = activity;
//    }
//
//    sort(events, events + n, comp);
//
//    ll endtime = 0;
//    for (ll i = 0; i < n; i++) {
//        if (events[i].start > endtime || (events[i].start == 0 && endtime == 0)) {
//            ans++;
//            endtime = events[i].end;
//        }
//    }
//
//    cout << ans;
//}

