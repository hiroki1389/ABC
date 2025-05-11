#include <bits/stdc++.h>
using namespace std;

int main() {
    int K;
    string S, T;
    cin >> K >> S >> T;

    int s_len = S.size();
    int t_len = T.size();

    if (abs(s_len - t_len) > 1) {
        cout << "No" << endl;
        return 0;
    }

    int i = 0, j = 0;
    bool used = false;

    while (i < s_len && j < t_len) {
        if (S[i] == T[j]) {
            i++;
            j++;
        } 
        else {
            if (used) {
                cout << "No" << endl;
                return 0;
            }

            used = true;

            if (s_len == t_len) {
                i++;
                j++;
            } else if (s_len < t_len) {
                j++;
            } else {
                i++;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}