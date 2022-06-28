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

using namespace std;
typedef   long long ll;

ll mod = 1000000007;
ll inf = INT64_MAX;

vector<vector<ll>> gr;
vector<bool> used;
vector<ll> ans;
ll c = 0;
void dfs( ll p) {
    used[p] = 1;
    ans[p] = c++;
    for (int i = 0; i < gr[p].size();i++) {
        if (!used[gr[p][i]]) {
            dfs(gr[p][i]);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, m, k;
    cin >> n >> m >> k;
    gr.resize(n);
    used.resize(n);
    ans.assign(n, -1);
    for (int i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        gr[a-1].push_back(b-1);
        gr[b - 1].push_back(a - 1);
    }
    dfs(k - 1);
    for (auto t : ans) {
        cout << t << ' ';
    }
    return 0;
}
