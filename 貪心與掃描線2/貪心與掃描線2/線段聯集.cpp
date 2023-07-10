/*
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

struct line
{
    ll start, end;
};

bool comp(line i, line j) { return (i.start < j.start); }

line lines[100000];
ll n, ans = 0;

int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> lines[i].start >> lines[i].end;

    sort(lines, lines + n, comp);

    ll leftBound = lines[0].start, rightBound = lines[0].end;
    for (ll i = 0; i < n; i++) {
        if (leftBound <= lines[i].start && lines[i].start <= rightBound) {
            rightBound = max(rightBound, lines[i].end);
        }
        else if (rightBound < lines[i].start)
        {
            ans += rightBound - leftBound;
            leftBound = lines[i].start;
            rightBound = lines[i].end;
        }
    }
    ans += rightBound - leftBound;

    cout << ans;
}
*/