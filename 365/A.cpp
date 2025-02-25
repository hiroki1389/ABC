#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
using ll = long long;

int main() {
    ll Y;
    cin >> Y;

    if(Y%4 != 0) cout << 365 << endl;
    else if (Y%100 != 0) cout << 366 << endl;
    else if (Y%400 != 0) cout << 365 << endl;
    else cout << 366 << endl;

    return 0;
}