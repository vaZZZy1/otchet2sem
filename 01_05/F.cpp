#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <ctime>
#include <climits>
#include <cassert>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <map>
#include <bitset>
#include <utility>
#include <algorithm>
#include <unordered_map>
#include <random>
#include <unordered_set>

using namespace std;
typedef long long ll;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<vector<char>> gr(7, vector<char>(27));
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 27; j++){
            cin >> gr[i][j];
        }
    }
    ll x, y;
    for (int i = 0; i < 27;i++){
        ll cr=0;
        x = 0, y = 0;
        for (int j = 0; j < 7;j++){
            if (gr[j][i] == '#') {
                cr++;
            } else {
                y = j;
            }
        }
        if (cr == 6) {
            x = i;
            if (i) {
                break;
            }
        }

    }
    if (gr[y][x-1] == '.') {
        ll x0 = 13, y0 = 7;
      ++x;
      ++y;
      cout << y % 7 << ' ';
      if (x >= x0){
          cout << x - x0;
      } else{
          cout << x - x0 + 27;
      }

    } else{
        ++x, y++;
        ll x0 = 17, y0 = 7;
        cout << y % 7 << ' ';
        if (x >= x0){
            cout << x - x0;
        } else{
            cout << x - x0 + 27;
        }
    }
    return 0;
}
/*
####...###..#...#.###.####.
#...#.#.....#...#..#..#...#
#...#.#.....#...#..#..#...#
####...###..#...#..#..####.
#...#.....#.#...#..#..#.#..
#...#.....#.#...#..#..#..#.
####...###...###..###.#...#

#..####.####...###..#...#.. 0
#..#.#..#...#.....#.#...#.. 1
#..#..#.#...#.....#.#...#.. 2
##.#...#####...###...###..# 3
##.####.####...###..#...#.# 4
#..#...##...#.#.....#...#.. 5
#..#...##...#.#.....#...#.. 6
012345678901234567890123456

####...###..#...#..#..####.
#...#.....#.#...#..#..#.#..
#...#.....#.#...#..#..#..#.
####...###...###..###.#...#
####...###..#...#.###.####.
#...#.#.....#...#..#..#...#
#...#.#.....#...#..#..#...#

 */
