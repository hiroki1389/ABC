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
// pythonのように整数除算において、負の値でも負の方向に切り捨てる除算
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
    ll N, M, Q;
    string S, T;
    
    cin >> N;

    ll count = 0;
    rep2(i,1,N+1) {
        cin >> M;
        if(i>9 && !(i%10 == i/10)) continue;

        ll temp = i%10;
        if(temp <= M) count++;
        if(temp+temp*10 <= M) count++;
    }
    printl(count);
}