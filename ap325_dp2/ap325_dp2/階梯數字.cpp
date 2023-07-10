/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;


ll n, m, ans = 0;
ll dp[20][10];
string str;


int main()
{
    cin >> str;
    n = str.length();

    for (ll i = 0; i < 10; i++)
        dp[0][i] = 1;

    ll sum = 0;
    for (ll i = 1; i < n; i++) 
    {
        sum = 0;
        for (ll j = 9; j >= 0; j--) {
            sum += dp[i - 1][j];
            dp[i][j] = sum;
        }
    }
    
    str = '0' + str;
    for (ll i = 1; i <= n; i++) 
    {
        if (str[i] - '0' < str[i - 1] - '0')
            break;   

        for (ll j = str[i - 1] - '0'; j < str[i] - '0'; j++) {
            ans += dp[n - i][j];
        }
    }
    
    bool check = true;
    for (ll i = 1; i <= n; i++) {
        if (str[i] < str[i - 1]) {
            check = false;
            break;
        }
    }
    if (check)
        ans++;

    cout << ans - 1;  // 3x. 578 的 case: 要加回 578 這一項 (但不一定每次都要加回來 )，再扣除 000 這一項
}
*/
