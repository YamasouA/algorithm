#include <iostream>
#include <string>
#include <vector>
using namespace std;

//連結リストの各ノードを表す構造体
struct Node {
    Node* next; //次がどのノードをしめすか
    string name; //ノードに付随している値

    Node(string name_ = ""): next(NULL), name(name_) { }
};

//番兵を表すノード
Node* nil;

//初期化
void init() {
    nil = new Node();
    nil->next = nil; //初期状態はnilがnilを指す
}

//連結リストを出力
void printList() {
    Node* cur = nil->next; //先頭から
    for(; cur != nil; cur = cur->next) {
        cout << cur->name << " -> ";
    }
    cout << endl;
}

//ノードpの直後にノードvを挿入
//ノードpのデフォルト引数をnilとする
//insert(v)を呼び出す操作はリストの先頭への挿入を表す
void insert(Node* v, Node* p = nil) {
    v->next = p->next;
    p->next = v;
}

int main() {
    //初期化
    init();

    //作りたいノードの名前の一覧
    //最後尾ノード(山本)から順に挿入に注意
    vector<string> names = {"yamamoto",
                            "watanabe",
                            "ito",
                            "takahashi",
                            "suzuki",
                            "sato"};

    //各ノードを生成して、連結リストの先頭に挿入
    for (int i = 0; i < (int)names.size(); ++i) {
        //ノードを作成
        Node* node = new Node(names[i]);
        
        //先頭へ挿入
        insert(node);

        //各ステップの連結リストの様子を出力
        cout << "step" << i << ": ";
        printList();
    }

}
