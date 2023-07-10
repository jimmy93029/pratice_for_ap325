//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <stack>
//#define ll long long
//using namespace std;
//
//ll n, root, sum = 0;
//vector<vector<ll>> nodes;
//
//ll dfs(ll root);
//int main()
//{
//    cin >> n;
//    vector<ll> findroot;
//    for (ll i = 0; i < n; i++)
//        findroot.push_back(1);
//
//    ll m, num;
//    for (ll i = 0; i < n; i++) 
//    {
//        cin >> m;
//        vector<ll> node;
//
//        if (m == 0) 
//            node.push_back(-1);
//        else {
//            for (ll j = 0; j < m; j++) {
//                cin >> num;
//                node.push_back(num - 1);
//                findroot[num - 1] = 0;
//            }
//        }
//        nodes.push_back(node);
//    }
//
//    for (ll i = 0; i < n; i++) {
//        if (findroot[i] == 1) {
//            root = i;
//            break;
//        }
//    }
//
//    ll temp = dfs(root);
//
//    cout << root + 1 << endl << sum;
//}
//
//
//vector<ll> noChild = { -1 };
//ll dfs(ll parent)
//{
//    if (nodes[parent] == noChild)
//        return 1;
//
//    ll hight = 0;
//    for (auto& child : nodes[parent]) {
//        hight = max(hight, dfs(child));
//    }
//    // cout << "hight:" << hight << endl;
//        
//    sum += hight;
//
//    return hight + 1;
//}
