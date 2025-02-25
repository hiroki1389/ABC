#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    int A;
    char S;

    int hirou = 0;
    int L_pos = -1;
    int R_pos = -1;

    for(int i = 0; i < N; i++) {
        cin >> A >> S;

        if(S == 'L') {
            if(L_pos == -1) {
                L_pos = A;
            } else {
                hirou += abs(L_pos - A);
                L_pos = A;
            }
        } else if(S == 'R') {
            if(R_pos == -1) {
                R_pos = A;
            } else {
                hirou += abs(R_pos - A);
                R_pos = A;
            }
        }
    }

    cout << hirou << endl;

    return 0;
}