#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//2点間(x1, y1), (x2, y2)の距離計算
double calc_dist(double x1, double y1, double x2, double y2) {
    return sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));
}

int main(){
    //入力
    int N; cin >> N;
    vector<double> x(N), y(N);
    for (int i=0; i<N;  ++i) cin >> x[i] >> y[i];

    //求める値を十分大きい値で初期化
    double minimum_dist = 100000000000.0;

    //探索開始
    for (int i=0; i<N; ++i) {
        for (int j=i+1; j<N; ++j){
            //距離計算
            double dist_i_j = calc_dist(x[i], y[i], x[j], y[j]);

            //最小minimum_distとdist_i_jを比較
            if (dist_i_j < minimum_dist) {
                minimum_dist = dist_i_j;
            }
        }
    }

    //答え出力
    cout << minimum_dist << endl;
}