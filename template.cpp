#include <bits/stdc++.h>
/*
#include <iostream>
#include <string>
#include <cctype>
#include <climits>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
*/
using namespace std;
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define rep2(i, j, n) for (int i = j; (i) < (n); ++(i))
void yes() { cout << "yes" << endl; }
void Yes() { cout << "Yes" << endl; }
void YES() { cout << "YES" << endl; }
void yes(bool flag) { cout << (flag ? "yes" : "no") << endl; }
void Yes(bool flag) { cout << (flag ? "Yes" : "No") << endl; }
void YES(bool flag) { cout << (flag ? "YES" : "NO") << endl; }
void print() { cout << ""; }
void prints() { cout << " "; }
void printl() { cout << endl; }
template <typename T> void print(const T& value) { cout << value; }
template <typename T> void prints(const T& value) { cout << value << " "; }
template <typename T> void printl(const T& value) { cout << value << endl; }
using ll = long long;
#define maxLL LLONG_MAX
// 整数除算において、pythonのように負の値でも負の方向に切り捨てる除算
ll pyDiv(ll a, ll b) {
    ll quotient = a / b;
    if ((a % b != 0) && ((a < 0) != (b < 0))) quotient -= 1;
    return quotient;
}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); } // 最大公約数（Maximum Common Divisor）
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; } // 最小公倍数（Least Common Multiple）
template<typename T> void sortVec(vector<T>& vec) { sort(vec.begin(), vec.end()); } // ベクトルの昇順ソート
template<typename T> void sortVecGreater(vector<T>& vec) { sort(vec.begin(), vec.end(), greater<T>()); } // ベクトルの降順ソート
// 和集合を返す関数
template<typename T>
set<T> setUnion(const set<T>& setA, const set<T>& setB) {
    set<T> result;
    set_union(setA.begin(), setA.end(), setB.begin(), setB.end(),
              inserter(result, result.begin()));
    return result;
}
// 積集合を返す関数
template<typename T> set<T> setIntersection(const set<T>& setA, const set<T>& setB) {
    set<T> result;
    set_intersection(setA.begin(), setA.end(), setB.begin(), setB.end(),
                     inserter(result, result.begin()));
    return result;
}

int main() {
    ll N,M,P,Q,H,X,Y,A,B,C,D;
    string S,T;
    ll count = 0;
    bool flag = false;
    vector<ll> V;
    vector<vector<bool>> rect(100,vector<bool>(100, false));
    
    cin >> N;
    vector<int> vec(N);
    rep(i,N) {
        vec[i] = (i+1)*2;
    }
    vec.push_back((N+1)*2);

    print("Vector contents: ");
    for (const auto& v : vec) {
        prints(v);
    }
    printl();

    // mapの使用例
    map<string, int> m;
    m["apple"] = 3;
    m["banana"] = 5;
    m["orange"] = 2;
    printl("Map contents:");
    for (const auto& [key, value] : m) {
        cout << key << ": " << value << endl;
    }

    // setの使用例
    set<int> setA = {1, 2, 3, 4};
    set<int> setB = {3, 4, 5, 6};
    setA.insert(10);
    setA.erase(1);

    // setの要素数出力
    print("size of setA: ");
    printl(setA.size());

    // 和集合と積集合の取得
    set<int> unionSet = setUnion(setA, setB);
    set<int> intersectionSet = setIntersection(setA, setB);

    // 和集合の表示
    print("Union of setA and setB: ");
    for (const auto& elem : unionSet) {
        prints(elem);
    }
    printl();

    // 積集合の表示
    print("Intersection of setA and setB: ");
    for (const auto& elem : intersectionSet) {
        prints(elem);
    }
    printl();

    return 0;
}