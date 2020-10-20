#include <iostream>
#include <vector>
using namespace std;
const int INF = 2000000;

int main() {
    //入力
    int N;
    cin >> N;

    vector<int> a(N);
    for(int i = 0; i < N; i++) cin >> a[i];

    //線形探索
    int min_value = INF;
    for(int i = 0; i < N; ++i) {
        if(a[i] < min_value) min_value = a[i];
    } 

    //結果表示
    cout << min_value << endl;
}