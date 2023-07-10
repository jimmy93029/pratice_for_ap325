/*
#include <iostream>
#include <string>
#include <map>
#define ll long long
using namespace std;

ll n, m, ans = 0;
string a[1001], b[1001], c;
map<string, ll> map_;

int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    for (ll i = 0; i < m; i++) {
        cin >> b[i];
    }

    for (ll i = 0; i < n; i++) {
        // cout << "into " << i << endl;
        bool check = false;
        c = a[i].assign(a[i], a[i].length() - 3, a[i].length());
        for (ll j = 0; j < m; j++)
            if (b[j] == c)
                check = true;

        if (check)
            ans++;
    }
   
    for (ll i = 0; i < n; i++) {
        c = a[i].assign(a[i].length() - 3, a[i].length());
        auto it = map_.find(b);
        if (it != map_.end())
            ans++;
    }

    cout << ans;
}
*/