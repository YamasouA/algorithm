#include <iostream>
#include <vector>
using namespace std;

int main() {
    //入力
    int N, v;
    cin >> N >> v;
    vector<int> a(N);
    for(int i = 0; i < N; ++i) cin >> a[i];

    //線形探索
    int found_id = -1;
    for(int i = 0; i < N; ++i) {
        if(a[i] == v) {
            found_id = v;
            break;
        }
    }

    //結果を表示(-1は見つかってないことを意味する)
    cout << found_id << endl;
}