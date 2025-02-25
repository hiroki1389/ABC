#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <vector>
#include <set>
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

int main() {
    ll N,X,Y,A;
    string S,T;
    
    cin >> S;
    if(S.length() == 1) {
        Yes(true);
        return 0;
    }
    
    rep(i,S.length()-1) {
        if(S[i] <= S[i+1]) {
            Yes(false);
            return 0;
        }
    }
    Yes(true);
}