#include <iostream>
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
    string S;
    cin >> S;

    string s1 = S.substr(0, 3);
    if(s1 != "ABC") {
        Yes(false);
        return 0;
    }

    string s2 = S.substr(3, 3);
    int num = stoi(s2);
    Yes(1<= num && num <= 315 || 317 <= num && num <= 349);
}