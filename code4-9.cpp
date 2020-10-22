#include <iostream>
#include <vector>
using namespace std;

bool func(int i, int w, const vector<int> &a) {
    //ベースケース
    if (i == 0) {
        if (w == 0) return true;
        else return false;
    }

    //a[i - 1]を選ばない
    if (func(i - 1, w, a)) return true;

    //a[i - 1]を含む
    if (func(i - 1, w - a[i - 1], a)) return true;

    //どっちもfalseならfalse
    return false;
}