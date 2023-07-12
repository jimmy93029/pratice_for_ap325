/*
#include <iostream>
#include <algorithm>
#include <string>
#define ll long long
using namespace std;

ll teams1[50000], teams2[50000];
ll m , n, ff, ans = 0;

bool comp(ll i, ll j) { return (i >= j); }

int main()
{
    cin >> m >> n;
    ff = (1 << m) - 1;

    string string_;
    for (ll i = 0; i < n; i++) {
        cin >> string_;
        for (ll j = 0; j < string_.length(); j++) {
            teams1[i] |= 1 << (string_[j] - 'A');
            teams2[i] = teams1[i];
        }
    }

    sort(teams1, teams1 + n);
    sort(teams2, teams2 + n, comp);

    ll i = 0, j = 0;
    while (i < n && j < n) 
    {
        if (teams1[i] + teams2[j] == ff)
            ans++;

        if (teams1[i] + teams2[j] <= ff)
            i++;
        else
            j++;
    }

    cout << ans/2;
    
}
*/