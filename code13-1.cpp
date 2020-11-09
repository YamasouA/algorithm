//グラフGにおいて、頂点sを始点とした探索を行う
void search(const Graph &G, int s) {
    int N = (int)G.size(); //グラフの頂点数

    //グラフ探索のためのデータ構造
    vector<bool> seen(N, false); //全頂点を「未訪問」に初期化
    queue<int> todo; //空の状態(深さ優先ならstack<int>)
    
    //初期条件  
    seen[s] = true; //sを探索済にする
    todo.push(s); //todoはsのみを含む状態

    //todoが空になるまで探索
    while (!todo.empty()) {
        //todo空頂点を取り出す
        int v = todo.front();
        todo.pop();

        //vからたどれる頂点を全て調べる
        for (int x: G[v]) {
            //すでに発見済なら探索しない
            if (seen[x]) continue;

            //新たな頂点を探索済にしてtodoに挿入
            seen[x] = true;
            todo.push(x);
        }
    }
}