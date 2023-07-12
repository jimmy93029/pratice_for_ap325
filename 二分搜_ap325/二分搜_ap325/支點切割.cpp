/*
#include <iostream>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;


ll sum = 0;
vector<ll> vec;
ll k;

void binarySearch(ll left, ll right, ll round);

int main()
{
	ll k, n, num, round = 1;

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> num;
		vec.push_back(num);
	}

	cout << "I will binarySearch" << endl;
	binarySearch(0, n - 1, round);
	cout << "I will sum";
	cout << sum << endl;
}


void binarySearch(ll left, ll right, ll round)
{
	 if (right - left < 2)
		return;

	ll val1 = 0, val2 = 0, num;
	for (int i = left; i <= right; i++) {
		val1 += vec[i] * i;
		val2 += vec[i];
	}

	ll min = abs(val1 - val2 * (left + 1));  ll pos = left + 1;
	for (int i = left + 1 ; i < right; i++) {
		num = abs(val1 - val2 * i);
		if (num < min)
			pos = i;
	}

	cout << "pos" << pos << "  vec[pos]" << vec[pos] << endl;
	sum += vec[pos];

	if (round == k)
		return;
	round++;


	binarySearch(left, pos, round);  binarySearch(pos + 1, right, round);
}
*/