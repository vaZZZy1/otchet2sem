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
#include <bitset>
#include <utility>
#include <algorithm>
#include <unordered_map>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    if (a < b) {
        swap(a, b);
    }
    while (a % b != 0) {
        a = a % b;
        swap(a, b);
    }
    return b;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    if ((a*c*e)==(b*d*f)) {
        ll ab, bc, ca;
        if (b > c) {
            ab = a, bc = b, ca = d * b / c;
        }
        else {
            bc = c, ca = d, ab = a * c / b;
        }
        if (ab + bc > ca and bc + ca > ab and ca + ab > bc) {
            cout << 1;
        }
        else cout << -1;
    }
    else cout << -1;
    return 0;
}
