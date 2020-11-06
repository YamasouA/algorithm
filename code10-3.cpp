#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
    //頂点数と辺数
    int N, M;
    cin >> N >> M;

    //グラフ
    Graph G(N);
    //辺数分追加
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        //push_back(x): xのコピーを末尾に追加
        G[a].push_back(b);

        //無効グラフの場合以下を追加
        //G[b].push_back(a);
    }
}