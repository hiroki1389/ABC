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
    int N, M;
    cin >> N >> M;

    int count = 0;

    rep(i,N) {
        int H;
        cin >> H;
        M -= H;
        if(M>-1) {
            count++;
        }
        else {
            printl(count);
            return 0;
        }
    }
    printl(count);

    return 0;
}