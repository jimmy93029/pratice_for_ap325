#include <iostream>
#include <set>
#define ll long long
using namespace std;


int main()
{
    set<ll> toSort;
    ll n, num, len;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        toSort.insert(num);
    }

    cout << toSort.size() << endl;
    for (std::set<ll>::iterator it = toSort.begin(); it != toSort.end(); it++) 
        cout << *it << ' ';
}