#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define rep(i, j, n) for (int i = j; (i) < (n); ++(i))
#define yes(flag) cout << ((flag)?"yes":"no") << endl
#define Yes(flag) cout << ((flag)?"Yes":"No") << endl
#define YES(flag) cout << ((flag)?"YES":"NO") << endl
#define print(string) cout << string
#define prints(string) cout << string << " "
#define printl(string) cout << string << endl
using ll = long long;

int main() {
    string S;
    cin >> S;

    if(S[0] == 'R') Yes(true);
    else if(S[0] == 'M') Yes(false);
    else if(S[1] == 'R') Yes(true);
    else Yes(false);

    return 0;
}