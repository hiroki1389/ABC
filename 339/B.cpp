#include <iostream>
#include <string>
#include <cctype>
#include <climits>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define rep2(i, j, n) for (int i = j; (i) < (n); ++(i))
#define yes(flag) cout << ((flag)?"yes":"no") << endl
#define Yes(flag) cout << ((flag)?"Yes":"No") << endl
#define YES(flag) cout << ((flag)?"YES":"NO") << endl
#define print(string) cout << string
#define prints(string) cout << string << " "
#define printl(string) cout << string << endl
using ll = long long;
#define maxLL LLONG_MAX

int main() {
    ll N,M,Q;
    string S, T;
    
    ll H, W;
    cin >> H >> W >> N;

    vector<vector<char> > grid(H, vector<char>(W, '.'));

    ll x = 0, y = 0, dir = 0;
    ll dx[4] = {-1, 0, 1, 0};
    ll dy[4] = {0, 1, 0, -1};

    rep(i,N) {
        if (grid[x][y] == '.') {
            grid[x][y] = '#';
            dir = (dir + 1) % 4;
        } else {
            grid[x][y] = '.';
            dir = (dir + 3) % 4;
        }

        x = (x + dx[dir]+H) % H;
        y = (y + dy[dir]+W) % W;
    }

    rep(i,H) {
        rep(j,W) {
            cout << grid[i][j];
        }
        cout << endl;
    }
}