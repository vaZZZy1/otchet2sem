#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
typedef long long ll;
ll mod = pow(10, 9) + 7;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n;
	while (cin >> n) {
		if (n == 1) {
			ll t;
			cin >> t;
			cout << "Win" << endl;
			continue;
		}
		ll a1;
		cin >> a1;
		for (int i = 1; i < n; i++) {
			ll x;
			cin >> x;
			a1 = a1 ^ x;
		}
		if (a1) {
			cout << "Win";
		}
		else {
			cout << "Lose";
		}
		cout << endl;
	}
	return 0;
}