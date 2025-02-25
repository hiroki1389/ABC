#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
using ll = long long;

int main() {
    ll N;
    cin >> N;

    vector<string> S(N);
    string lastMeat = "";
    rep(i,N) {
        cin >> S[i];
        if(lastMeat == "sweet" && S[i] == "sweet") {
            if(i==N-1) cout << "Yes" << endl;
            else cout << "No" << endl;
            return 0;
        }
        if(lastMeat == "salt" && S[i] == "salt") {
            if(i==N-1) cout << "Yes" << endl;
            else cout << "No" << endl;
            return 0;
        }
        lastMeat = S[i];
    }

    cout << "Yes" << endl;

    return 0;
}