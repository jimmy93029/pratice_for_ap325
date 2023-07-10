/*
#include <iostream>
#include <algorithm>
#define ll long long
#define oo 1000000
using namespace std;

int n, m, max_ = 0;
int p[100001];
int dpf[oo] = {0};

int f(int F);
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        max_ = max(max_, p[i]);
    }

    int F = 0;
    for (ll jump = oo - 1; jump > 0; jump = jump / 2) 
    {
        // cout << "into for";
        if (dpf[F + jump] == 0) {
            dpf[F + jump] = f(F + jump);
             // cout << "dpf[" << F + jump << "] = " << dpf[F + jump] << endl;
        }

        while (dpf[F + jump] > m) {
             // cout << "into while" << endl;

            F = F + jump;

            if (dpf[F + jump] == 0) {
                dpf[F + jump] = f(F + jump);
                // cout << "dpf[" << F + jump << "] = " << dpf[F + jump] << endl;
            }
        }
    }

    cout << F + 1;
}


int f(int F)
{
    if (F < max_)
        return oo;

    int m = 0, f = F - p[0];

    for (ll i = 1; i < n; i++) {
        if (f - p[i] < 0) {
            m++;
            f = F;
        }
        f -= p[i];
    }

    return m;
}
*/