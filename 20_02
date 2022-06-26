#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <tuple>
#include <string>
#include <list>
typedef long long ll;
using namespace std;
const ll inf = INT64_MAX;

ll n, t;
vector<ll> a;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> t;
	set<ll> ans;
	for (int i = 0; i < n; i++) {
		ans.insert(a[i] / t);
	}
	cout << ans.size();
	return 0;
}
