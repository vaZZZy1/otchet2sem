#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <string>
#include <stack>
#include <deque>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(2*n);
    for (int i = 0; i < 2*n; i+=2) {
        ll l, r;
        cin >> l >> r;
        a[i] = { l, 0 };
        a[i + 1] = { r,1 };
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    ll q = 0;
    for (int i = 0; i < 2 * n; i++) {
        if (a[i].second == 0) {
            ++q;
            if (q == 1 and i) {
                ans += a[i].first - a[i - 1].first - 1;
            }
        }
        else {
            --q;
        }
    }
    cout << a[2 * n - 1].first - a[0].first - ans + 1;
    return 0;
}
