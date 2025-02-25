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

// pythonのように整数除算において、負の値でも負の方向に切り捨てる除算
ll pyDiv(ll a, ll b) {
    ll quotient = a / b;

    if ((a % b != 0) && ((a < 0) != (b < 0))) quotient -= 1;

    return quotient;
}

int main() {
    ll N,M,Q;
    string S, T;
    
    ll L,R;
    cin >> N >> L >> R;
    while(N--){
        cin >> M;
        if(M<=L) prints(L);
        else if(R<= M) prints(R);
        else prints(M);
    }
}