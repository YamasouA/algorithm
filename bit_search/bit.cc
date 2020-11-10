#include <iostream>
using namespace std;

int main() {
    int a = 2;
    //i < (1<<a) は2^a解のループ
    for (int i = 0; i < (1<<a); ++i) cout << i << endl;
}