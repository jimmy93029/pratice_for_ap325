/*
#include <iostream>
#include <algorithm>
#include <set>
#define ll long long
#define oo 100000000
using namespace std;

struct line
{
    ll a, b;
    ll leftBound, rightBound;
    ll theSame = false;
};

ll n, m, ans = 0;
ll c[50000];
line lines1[100000], lines2[100000], lines[100000];

bool comp(line i, line j)
{
    if (i.a < j.a)
        return true;
    if (i.a == j.a && i.b <= j.b)
        return true;
    return false;
}

int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
        cin >> lines1[i].a >> lines1[i].b;
    for (ll i = 0; i < m; i++)
        cin >> c[i];
    
    sort(lines1, lines1 + n, comp);

    ll i = 0, j = 0;
    line num = lines1[0];
    while (i < n) 
    {
        if (i == n) {
            lines[j] = num;
            break;
        }
        while (lines1[i + 1].a == num.a)
            i++;

        lines2[j++] = num;
        num = lines1[i++];
    }
    
    sort(c, c + m);

    ll x;
    for (ll i = 0; i < n; i++) 
    {
        if (i == n - 1) {
            lines2[i].rightBound = oo;
            break;
        }
        if (i == 0)
            lines2[i].leftBound = -oo;

        x = (lines2[i + 1].b - lines2[i].b) / (lines2[i].a - lines2[i + 1].a);
        lines2[i].rightBound = x;
        lines2[i + 1].leftBound = x + 1;
    }

    ll j = 0;
    for (ll i = 0; i < m; i++) 
    {
        while (c[i] > lines[j].rightBound)
            j++;
   
        ans += lines[j].a * c[i] + lines[j].b;
    }

    cout << ans;
}
*/