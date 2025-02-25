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
    string S, T;
    
    cin >> S >> T;

    vector<string> X;

    while(S != T) {
        string preS = S;
        rep(i,S.length()) {
            if(S[i] > T[i]) {
                S[i] = T[i];
                i = S.length();
            }
        }
        if(preS == S) {
            for(int i = S.length()-1; i>=0; i--) {
                if(S[i] != T[i]) {
                    S[i] = T[i];
                    i = -1;
                }
            }
        }
        X.push_back(S);
    }

    printl(X.size());
    rep(i,X.size()) {
        printl(X[i]);
    }
}