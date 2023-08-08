#include <iostream>
using namespace std; /*using指令 "std(standardの略)"という名前空間を使う*/
int main(void){
    cout << "初めてのC++プログラム\n"; /* cout(character outの略) */
    cout <<"画面に出力します\n";
    cout << "x+yは" << 15+34 << "です\n";

    int a,b;
    cout<<"aの値"; cin>>a; /*aに入力*/
    cout<<"bの値"; cin>>b; /*bに入力*/
    cout<<"aの値は"<<a<<",bの値は"<<b;
}