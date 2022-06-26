#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
typedef long long ll;
ll max_const = pow(2, 20) - 1;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin >> t;
	for (ll _ = 0; _ < t; _++) {
		ll n;
		cin >> n;
		vector<ll> b(n);
		unordered_set<ll> m;
		ll check = max_const;
		for (ll i = 0; i < n; i++) {
			cin >> b[i];
			m.insert(b[i]);
			check = check & b[i];
		}
		if (m.find(check) != m.end()) {
			vector<ll> ans;
			for (auto i : b) {
				ans.push_back(i);
				ans.push_back(check);
			}
			cout << ans.size() << endl;
			for (auto i : ans) {
				cout << i << ' ';
			}
			cout << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
	return 0;
}
