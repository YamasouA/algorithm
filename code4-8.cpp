#include <iostream>
#include <vector>
using namespace std;

//メモ化する配列
vector<long long> memo;

long long fibo(int N) {
    //ベースケース
    if (N==0) return 0;
    else if (N==1) return 1;

    //メモをチェック
    if(memo[N] != -1) return memo[N];

    //答えをメモしながら
    return memo[N] = fibo(N-1) + fibo(N-2);
}

int main() {
    //メモをー1で初期化
    memo.assign(50, -1);

    //fiboを呼び出す
    fibo(49);

    //memoに答え格納
    for(int N = 2; N < 50; ++N) {
        cout << N << "項目:" << memo[N] << endl;
    }
}