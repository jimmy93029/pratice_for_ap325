#include <iostream>
#include <string>
#define ll long long
using namespace std;

string x;
ll y, p;

ll fastPow(ll x, ll y, ll p);
int main()
{
    cin >> x >> y >> p;
    ll mode = 0, len = x.length(), x_i;

    for (ll i = 0; i < len; i++) {
        x_i = (((x[len - 1 - i] - '0') % p) * fastPow(10, i, p)) % p;
        mode = (mode + x_i) % p;
    }
    
    mode = fastPow(mode, y, p);

    cout << mode;
}

ll fastPow(ll x, ll y, ll p)
{
    if (y == 0) 
        return 1 ;
    else if (y % 2 == 1) 
        return (fastPow(x, y - 1, p) * x) % p;
    else if (y % 2 == 0) 
    {
        ll t = fastPow(x, y / 2, p) % p;
        return (t * t) % p;
    }
}
