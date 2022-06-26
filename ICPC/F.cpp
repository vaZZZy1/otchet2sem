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

int n;
vector<vector<int>> gr;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    if (n > 3) {
        gr.resize(n);
        gr[0] = { 1,2 };
        gr[1] = { 2,3 };
        gr[2] = { 3 };
        for (int i = 4; i < n; i++) {
            gr[i - 1].push_back(i);
        }
        cout << n - 4 + 5 << '\n';
        for (int i = 0; i < n; i++) {
            for (auto t : gr[i]) {
                cout << i + 1 << ' ' << t + 1 << '\n';
            }
        }
    }
    else {
        cout << -1;
    }
    return 0;
}
