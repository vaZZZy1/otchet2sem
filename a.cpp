#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
#include <cmath>
#include <numeric>
#include <iomanip>
#include <stack>
#include <fstream>
using namespace std;
typedef long long ll;
ll mod = 1000000007;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    for (int _ = 0; _ < t; _++) {
        ll res = 1;
        ll a, n;
        cin >> a >> n;
        while (n > 0) {
            if (n % 2 == 1) {
                res = (res * a) % mod;
            }
            a = (a * a) % mod;
            n /= 2;
        }
        cout << res << endl;
    }
    return 0;
}
