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
    ll N,M;
    string S, T;
    
    ll W, B;
    cin >> W >> B;
    string subStr = "wbwbwwbwbwbw";
    string base = "";
    rep(i,100) {
        base += subStr;
    }
    
    rep(i,subStr.length()) {
        string temp = base.substr(i,W+B);
        ll wCount = 0;
        rep(i,temp.length()) {
            if(temp[i] == 'w') wCount++;
        }
        if(wCount == W) {
            Yes(true);
            return 0;
        }
    }
    Yes(false);
}