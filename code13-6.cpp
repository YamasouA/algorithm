#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using Graph = vector<vector<int>>;

//トポロジカルソート
vector<bool> seen;
vector<int> order; //トポロジカルソート順
void rec(const Graph &G, int v) {
    seen[v] = true;
    for (auto next_v : G[v]) {
        if (seen[next_v] = true) continue; 
        rec(G, next_v);
    }

    //v-outを記録する
    order.push_back(v);
}

int main() {
    int N, M;
    cin >> N >> M; //頂点数と枝数
    Graph G(N); //頂点数Nのグラフ
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    //探索
    seen.assign(N, false);
    order.clear();
    for (int v = 0; v < N; ++v) {
        if (seen[v]) continue; //すべて訪問済なら探索しない
        rec(G, v);
    }
    reverse(order.begin(), order.end());

    //出力
    for (auto v : order) cout << v << " -> ";
    cout << endl;
}