#include <iostream>
using namespace std;
int main(){
    /*読み込んだ整数値は正か？*/
    int num;
    cout<<"整数値を入力してね\n";
    cin>>num;
    if(num>0)
        cout<<"その値は正です";
    else
        cout<<"その値は負です";
}