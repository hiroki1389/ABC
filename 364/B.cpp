#include <iostream>
#include <string>
#include <cctype>
#include <climits>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
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
    ll N;
    ll H,W,X,Y;
    cin >> H >> W >> X >> Y;
    X--;
    Y--;

    vector<vector<bool> > mat(H, vector<bool>(W));
    rep(i,H) {
        rep(j,W) {
            char input;
            cin >> input;
            if(input == '.') mat[i][j] = true;
            else mat[i][j] = false;
        }
    }

    string S;
    cin >> S;
    rep(i, S.length()) {
        if(S[i] == 'L') {
            if(Y != 0 && mat[X][Y-1]) Y--; 
        } else if(S[i] == 'R') {
            if(Y != W-1 && mat[X][Y+1]) Y++; 
        } else if(S[i] == 'U') {
            if(X != 0 && mat[X-1][Y]) X--; 
        } else { //  if(S[i] == 'D') 
            if(X != H-1 && mat[X+1][Y]) X++; 
        }
    }

    cout << X+1 << " " << Y+1 << endl;
}