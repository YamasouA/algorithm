#include <iostream>
#include <vector>
using namespace std;
const int MAX = 100000; //キューの配列サイズ

int qu[MAX]; //キューを表す配列
int tail = 0, head = 0; //キューの要素区間を表す

//キューの初期化
void init() {
    head = tail = 0;
}

//キューが空化を判定
bool isEmpty() {
    return (head == tail);
}

//キューが満杯か判定
bool isFull() {
    return (head == (tail + 1) % MAX);
}

//enque
void enque(int x) {
    if (isFull()) {
        cout << "error: queue is full." << endl;
        return;
    }

    qu[tail] = x;
    ++tail;
    if (tail == MAX) tail = 0; //リングバッファの終端に来たら0
}

//deque
int deque() {
    if (isEmpty()) {
        cout << "error: queue is empty." << endl;
        return -1;
    }
    int res = qu[head];
    ++head;

    if (head == MAX) head = 0; //リングバッファの終端に来たら0
    return res;
}

int main() {
    init(); //キューを初期化

    enque(3); //キューを3に追加
    enque(5);
    enque(7);

    cout << deque() << endl;
    cout << deque() << endl;

    enque(9);
}