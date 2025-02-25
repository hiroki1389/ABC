#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> R(N);
    for (int i = 0; i < N; i++) {
        cin >> R[i];
    }

    vector<int> result(N, 1);
    bool flag = true;

    while (flag) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += result[i];
        }
        if (sum % K == 0) {
            for (int i = 0; i < N; i++) {
                cout << result[i];
                if (i == N - 1)
                    cout << endl;
                else
                    cout << " ";
            }
        }

        int idx = N-1;
        while (idx > -1) {
            result[idx]++;
            if (result[idx] <= R[idx]) {
                break;
            } else {
                result[idx] = 1;
                idx--;
            }
        }

        if (idx == -1) {
            flag = false;
        }
    }

    return 0;
}