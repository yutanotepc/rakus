#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
    string S;
    cin >> S;

    // 後ろから解くかわりにすべての文字列を「左右反転」する
    reverse(S.begin(), S.end()); //string型変数Sを、左右反転する
    //string型配列devideの内容を、それぞれ左右反転する
    for (int i = 0; i < 4; ++i) reverse(divide[i].begin(), divide[i].end()); 

    // 端から切っていく
    bool can = true; //bool型変数can
    for (int i = 0; i < S.size();) {
        bool can2 = false; // 4個の文字列たちどれかで divide できるか
        for (int j = 0; j < 4; ++j) {
            string d = divide[j];
            //.substr(0,3) [0]から3文字
            if (S.substr(i, d.size()) == d) { // d で divide できるか
                can2 = true;
                i += d.size(); // divide できたら i を進める
            }
        }
        if (can2==false) { // divide できなかったら
            can = false;
            break;
        }
    }

    if (can==true) cout << "YES" << endl;
    else cout << "NO" << endl;
}