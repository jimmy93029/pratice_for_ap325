#include <iostream>
#include <algorithm>
#include <deque>
#define ll long long
#define oo 10000005
using namespace std;

struct Line
{
    double R, L, a, b;
}L1[100001], L2[100001];

ll n, m, len2 = 0, ans = 0;
ll c[50001];

bool comp(Line i, Line j) { return (i.a < j.a || (i.a == j.a && i.b < j.b)); }
int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
        cin >> L1[i].a >> L1[i].b;
    for (ll i = 0; i < m; i++)
        cin >> c[i];

    sort(L1, L1 + n, comp);
    sort(c, c + m);

    double x;
    L1[0].L = -oo, L1[n - 1].R = oo;
    for (ll i = 0; i < n - 1; i++) {
        if (L1[i].a != L1[i + 1].a) {
            x = (L1[i + 1].b - L1[i].b) / (L1[i].a - L1[i + 1].a);
            L1[i].R = L1[i + 1].L = x;

            if (L1[i].L > L1[i].R) {
                x = (L2[len2 - 1].b - L1[i + 1].b) / (L2[len2 - 1].a - L1[i + 1].a);
                L2[len2 - 1].R = L1[i + 1].L = x;
            }
            else
                L2[len2++] = L1[i];
        }
        else if (i != 0) {
            x = (L2[len2 - 1].b - L1[i + 1].b) / (L2[len2 - 1].a - L1[i + 1].a);
            L2[len2 - 1].R = L1[i + 1].L = x;
        }
        else {
            L1[i + 1].L = -oo;
        }
    }
    L2[len2++] = L1[n - 1];

    //for (ll i = 0; i < len2; i++)
    //    cout << "L2[" << i << "] = " << L2[i].a << ' ' << L2[i].b << ", L: " << L2[i].L << "¡BR: " << L2[i].R << endl;

    ll i = 0, j = 0;
    for (ll i = 0; i < m; i++) {
        while (c[i] > L2[j].R)
            j++;
        if (L2[j].L <= c[i] && c[i] <= L2[j].R) {
            // cout << "L2[ " << j << "].L <= " << c[i] << " <= L2[" << j << "].R" << endl;
            // cout << "ans += " << L2[j].a << " * " << c[i] << " + " << L2[j].b << endl;
            ans += L2[j].a * c[i] + L2[j].b;
        }
    }

    cout << ans;
}