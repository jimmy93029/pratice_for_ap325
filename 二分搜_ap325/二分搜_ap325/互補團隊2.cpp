//#include <iostream>
//#include <algorithm>
//#include <string>
//#define ll long long
//using namespace std;
//
//struct Team
//{    
//    string members = "                         ";
//    string perp_members = "                         ";
//    ll len;
//    bool isoccupied = false;  // 團隊有可能已經配對
//
//} teams[50000];
//
//
//bool comp(Team i, Team j) { return (i.len < j.len); }
//bool comp1(Team i, ll j) { return (i.len < j); }
//
//int main()
//{
//    ll m, n, ans = 0;
//    string word;
//    cin >> m >> n;
//
//    for (ll i = 0; i < n; i++) 
//    {
//        cin >> word;
//        teams[i].len = word.length();
//
//        for (ll j = 0; j < word.length(); j++)
//        {
//            ll pos = word[j] - 'A';
//            if (teams[i].members[pos] == '1')
//                teams[i].len--;
//            else
//                teams[i].members[pos] = '1';
//        }
//        for (ll j = 0; j < m; j++) {
//            if (teams[i].members[j] == ' ')
//                teams[i].perp_members[j] = '1';
//        }
//    }
//    
//    sort(teams, teams + n, comp);
//
//    for (ll i = 0; i < n; i++) 
//    {
//        auto iter_j = lower_bound(teams, teams + n, m - teams[i].len, comp1);
//
//        if ((iter_j != teams + n) && (!teams[i].isoccupied))
//        {
//            ll j = iter_j - teams;
//            while (j < n && teams[j].len  + teams[i].len == m ) {
//                if ((!teams[j].isoccupied) && teams[j].members == teams[i].perp_members) {
//                    ans++;
//                    teams[i].isoccupied = true;
//                    teams[j].isoccupied = true; 
//                    break;
//                }   
//                j++;
//            }           
//        }
//    }
//
//    cout << ans;
//}


