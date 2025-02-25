#include <iostream>
using namespace std;

int main() {
    char S_AB, S_AC, S_BC;
    cin >> S_AB >> S_AC >> S_BC;
    
    // A, B, C の順位を格納する変数
    int rankA = 0, rankB = 0, rankC = 0;

    // A と B の比較
    if (S_AB == '<') {
        rankA++;
    } else {
        rankB++;
    }

    // A と C の比較
    if (S_AC == '<') {
        rankA++;
    } else {
        rankC++;
    }

    // B と C の比較
    if (S_BC == '<') {
        rankB++;
    } else {
        rankC++;
    }

    // 各順位に対応する名前を出力
    if (rankA == 1) {
        cout << 'A' << endl;
    } else if (rankB == 1) {
        cout << 'B' << endl;
    } else if (rankC == 1) {
        cout << 'C' << endl;
    }

    return 0;
}