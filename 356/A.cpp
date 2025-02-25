#include <iostream>
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
    int N, L, R;
    cin >> N >> L >> R;

    rep(i,L-1) {
        prints(i+1);
    }
    for(int i=R; i>L-1; i--) {
        prints(i);
    }
    rep2(i,R, N) {
        prints(i+1);
    }

    return 0;
}