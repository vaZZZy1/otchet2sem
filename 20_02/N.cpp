#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <tuple>
#include <string>
#include <list>
#include <unordered_set>
typedef long long ll;
using namespace std;
const ll inf = INT64_MAX;

ll n;
vector<ll> a;

inline bool check(ll a, ll b, ll c) {
	auto a1 = to_string(c);
	for (int i = 1; i < a1.size(); i++) {
		if (a1[i] < a1[i - 1] or (int)a1[i] - 1 != (int)a1[i - 1]) {
			return false;
		}
	}
	return true;
}

ll Max(ll a, ll b) {
	if (a > b) return a;
	return b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	ll ans = -1;
	for (int i = n - 1; i >= 1; i--) {
		for (int j = i - 1; j >= 0; j--) {
			if (check(a[j], a[i], a[i] * a[j])) {
				ans = Max(a[i] * a[j], ans);
	
			}
		}
	}
	cout << ans;
	return 0;
}
