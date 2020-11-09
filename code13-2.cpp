#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

//深さ優先探索
vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true; //vを訪問済にする

    //vからいける頂点next_vについて
    for (auto next_v : G[v]) {
        if (seen[next_v]) continue; //next_vが探索済なら探索しない
        dfs(G, next_v); //再帰的に探索
    }
}

int main() {
    //頂点数と辺数
    int N, M;
    cin >> N >> M;

    //グラフの入力受け取り(有向グラフを想定)
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    //探索
    seen.assign(N, false); //初期状態
    for (int v = 0; v < N; ++v) {
        if (seen[v]) continue;
        dfs(G, v);
    }
}