#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i=0; i<(1<<N); ++i)
    {
        cout << i << endl;
        if(i & 13){
            cout << "fuck" << endl;
        }
    }
}