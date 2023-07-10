#include <iostream>
#include <vector>
#define ll long long
using namespace std;


ll n, p;
vector<ll> vec;
ll bestSum = 0;
vector<vector<ll>> bestChain;  
// 我在此題中還考慮了變化題: 輸出sum 的同時還輸出 組成sum之鏈上的所有元素

void rec(ll round, ll sum, vector<ll> chain);
int main()
{
    ll num, len, lenv;
    cin >> n >> p;
    for (int i = 0; i < n; i++) {
        cin >> num;   vec.push_back(num);
    }

    vector<ll> chain;  rec(0, 0, chain);
    chain.push_back(vec[0]);  rec(0, vec[0], chain);


    len = bestChain.size();
    for (int i = 0; i < len; i++) 
    {
        lenv = bestChain[i].size();
        for (int j = 0; j < lenv; j++){
            cout << bestChain[i][j] << ' ';
        }
        cout << endl;
    }

    cout << "bestSum" << bestSum;
}


void rec(ll round, ll sum, vector<ll> chain)
{
    round++;

    if (sum > p)
        return;

    if (round == n) {
        if (sum == bestSum)
            bestChain.push_back(chain);
        if ((p - sum) < (p - bestSum)) {
            bestSum = sum;
            bestChain.clear();
            bestChain.push_back(chain);
        }
        return;
    }

    rec(round, sum, chain);

    chain.push_back(vec[round]);  
    rec(round, sum + vec[round], chain);

}