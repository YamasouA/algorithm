#include <iostream>
#include <string>
#include <vector>
using namespace std;

//連結リストの各ノードを表す構造体
struct Node {
    Node *prev, *next;
    string name;

    Node(string name_ = ""):
    prev(NULL), next(NULL), name(name_) { }
};

//番兵を表すノード
Node* nil;

//初期化
void init() {
    nil = new Node();
    nil->prev = nil;
    nil->next = nil;
}

//連結リストを出力
void printList() {
    Node* cur = nil->next;
    for (; cur != nil; cur = cur->next) {
        cout << cur->name << " -> ";
    }
    cout << endl;
}

//ノードpの直後にノードvを挿入
void insert(Node* v, Node* p = nil) {
    v->next = p->next;
    p->next->prev = v;
    p->next = v;
    v->prev = p;
}

//ノードvを削除
void erase(Node *v) {
    if (v == nil) return; //vが番兵なら何もしない
    v->prev->next = v->next;
    v->next->prev = v->prev;
    delete v; //メモリを解放
}

int main() {
    //初期化
    init();

    //作りたいノードの名前の一覧
    //最後尾のノードから順に挿入
    vector<string> names = {"yamamoto",
                            "watanabe",
                            "ito",
                            "takahashi",
                            "suzuki",
                            "sato"};
    
    //連結リスト作成:　各ノードを生成し先頭に挿入
    Node* watanabe;
    for (int i = 0; i < (int)names.size(); ++i) {
        //ノードを作成
        Node* node = new Node(names[i]);

        //作成したノードを連結リストの先頭に
        insert(node);

        //渡辺　ノードを保存
        if (names[i] == "watanabe") watanabe = node;
    }

    //渡辺ノードを削除
    cout << "before: ";
    printList(); //削除前を出力
    erase(watanabe);
    cout << "after";
    printList();
}