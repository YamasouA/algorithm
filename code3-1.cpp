#include <iostream>
#include <vector>
using namespace std;

int main() {
    //入力を受ける
    int N, v;
    cin >> N >> v;
    vector<int> a(N);
    for(int i = 0; i < N; ++i) cin >> a[i];

    //線形探索
    bool exist = false;
    for(int i = 0; i < N; ++i) {
        if (a[i] == v) {
            exist = true;
        }
    }

    //結果出力
    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}