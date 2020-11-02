#include <iostream>
#include <vector>
#include <algorithm> //sortやlower_bound()を使える
using namespace std;
const int INF = 2000000;

int main() {
    //入力
    int N, K;
    cin >> N >> K;
    vector<int> a(N), b(N);
    for (int i = 0; i < N; ++i) cin >> a[i];
    for (int i = 0; i < N; ++i) cin >> b[i];

    //暫定最小
    int min_value = INF;

    //bをソート
    sort(b.begin(), b.end());

    //aを固定して解く
    for (int i = 0; i < N; ++i) {
        //bの中でk-a[i]以上の最小値を示す
        auto iter = lower_bound(b.begin(), b.end(), K - a[i]);

        //イテレータの値を取り出す
        int val = *iter;

        //min_valueと比較
        if (a[i] + val < min_value) {
            min_value = a[i] + val;
        }
    }
    cout << min_value << endl;
}