#include <iostream>
#include <vector>
using namespace std;
const int MAX = 100000; //スタックの最大サイズ

int st[MAX]; //スタックを表す配列
int top = 0; //スタックの先頭

//スタックを初期化
void init() {
    top = 0;
}

//スタックが空化を判定
bool isEmpty() {
    return (top == 0); //スタックサイズがゼロか
}

//スタックが満杯かどうか判定
bool isFull() {
    return (top == MAX); //スタックがMAXかどうか
}

//push
void push(int x) {
    if (isFull()) {
        cout << "error: stack is full." << endl;
        return;
    }
    st[top] = x; //xを格納
    ++top; //topを進める
}

int pop() {
    if (isEmpty()) {
        cout << "error: stack is empty." << endl;
        return -1;
    }
    --top; //デクリメントしてから
    return st[top]; //topの要素を返す
}

int main() {
    init(); //スタックを初期化

    push(3);

    push(5);
    push(7);

    cout << pop() << endl;
    cout << pop() << endl;
    push(9);
    
}