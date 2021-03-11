#include <iostream>
#include <vector>
using namespace std;

vector<long long> memo;

long long tribo(int N) {
    //ベースケース
    if (N == 0 || N == 1) return 0;
    else if (N == 2) return 1;

    //メモを確認
    if(memo[N] != -1) return memo[N];

    return memo[N] = tribo(N - 1) + tribo(N - 2) + tribo(N - 3);

}

int main() {
    //メモ化用配列を初期化
    memo.assign(50, -1);

    //fibo(49)を呼び出す
    tribo(49);

    //memoに答えが格納されている
    for (int N = 2; N < 50; ++N) {
        cout << N << "項目:" << memo[N] << endl;
    }
}