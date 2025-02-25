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
    ll N,M;
    string S, T;
    
    ll A, B, C, X;
    cin >> N >> A >> B;
    
    ll result = 0;
    rep2(i,1, N+1) {
        string s = to_string(i);
        ll count = 0;
        for (char c : s) {
            count += c - '0';
        }
        if(A <= count && count <= B) result += i;
    }
    
    printl(result);
}