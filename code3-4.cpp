#include <iostream>
#include <vector>
using namespace std;
const int INF = 20000000;

int main() {
    //入力
    int N, K;
    cin >> N >> K;
    vector<int> a(N), b(N);
    for(int i = 0; i < N; ++i) cin >> a[i];
    for(int i = 0; i < N; ++i) cin >> b[i];

    //線形探索
    int min_value = INF;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            //和がK以上なら捨てる
            if(a[i] + b[j] < K) continue;

            //最小を更新
            if(a[i] + b[i] < min_value) {
                min_value = a[i] + b[i];
            }

        }
    }

    //結果表示
    cout << min_value << endl;
}