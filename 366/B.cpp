#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    int maxLen = 0;
    for (int i = 0; i < N; i++) {
        cin >> S.at(i);
        if(maxLen < S.at(i).length()) maxLen = S.at(i).length();
    }

    vector<string> result;
    for(int i=0; i<maxLen; i++) {
        string temp = "";
        for(int j=N-1; j>-1; j--) {
            if(i < S.at(j).length()) temp += S.at(j)[i];
            else temp += "*";  
        }
        while (temp.back() == '*') {
            temp.pop_back();
        }
        result.push_back(temp);
    }

    for (int i=0; i<result.size(); i++) {
        cout << result.at(i) << endl;
    }

    return 0;
}