/*
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;


int main()
{

}


ll findkey(vector<ll>& dicv, vector<ll>& vec, ll num);
void discretizate_set()
{
    ll n, num;
    vector<ll> vec;
    vec.reserve(1000000000);    // 丟reserve 可能會出現 abort的錯誤，還不確定為甚麼
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        vec.push_back(num);
    }
    set<ll> dic(vec.begin(), vec.end());  // 用 set 會自動幫我排序
    vector<ll> dicv(dic.begin(), dic.end());

    for (int i = 0; i < vec.size(); i++){
        cout << findkey(dicv, vec, vec[i]) << ' ';
    }
   ;
}


ll findkey(vector<ll>& dicv, vector<ll>&vec, ll num)
{
    ll ndx;
    ndx = lower_bound(dicv.begin(), dicv.end(), num) - dicv.begin();
    return ndx;
}
*/