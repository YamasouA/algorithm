#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

//深さ優先探索
vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true; //vを訪問済にする

    //vから行ける頂点をnext_vに入れる
    for (auto next_v : G[v]) {
        if (seen[next_v] == true) continue;
        dfs(G, next_v);
    }
}

int main() {
    //頂点数と辺数,sとt
    int N, M, s, t;
    cin >> N >> M >> s >> t;

    //グラフ入力受け取り
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    //頂点sをスタートとして探索
    seen.assign(N, false);
    dfs(G, s);

    //tにたどり着けるかどうか
    if (seen[t]) cout << "Yes" << endl;
    else cout << "No" << endl;
}