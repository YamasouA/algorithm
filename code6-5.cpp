#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const long long INF = 1LL << 60;

int main() {
    //入力
    int N;
    cin >> N;
    vector<long long> h(N), s(N);
    for (int i = 0; i < N; i++) cin >> h[i] >> s[i];

    //2分探索
    long long left = 0, right = INF;
    while(right - left > 1) {
        long long mid = (left + right) / 2;

        //判定
        bool ok = true;
        vector<long long>t(N, 0); //各風船割るための制限時間
        for (int i = 0; i < N; ++i) {
            //midが初期高度より低いとfalse
            if (mid < h[i]) ok = false;
            else t[i] = (mid - h[i]) / s[i];
        }

        //時間制限が差し迫っている順にソート
        sort(t.begin(), t.end());
        for (int i = 0; i < N; ++i) {
            if (t[i] < i) ok = false; //時間切れ
        }

        if (ok) right = mid;
        else left = mid;
    }
    cout << right << endl;
}