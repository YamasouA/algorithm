#include <iostream>
using namespace std;

int main() {
    cout << "Start Game!" << endl;

    //数の候補の区間
    int left = 20, right = 36;

    //2文探索
    while(right - left > 1) {
        int mid = (left + right) / 2; //区間の真ん中

        //mid以上かを確認
        cout << "Is the age less than" << mid << "? (yes / no)" << endl;
        string ans;
        cin >> ans;

        //解答から答えを絞る
        if (ans == "yes") right = mid;
        else left = mid;
    }

    cout << "The age is" << left << "!" << endl;
}