#include <string>
#include <iostream>
using namespace std;
int main(){
    char c;         /*char型変数cを定義　1文字*/
    string name;    /*string型変数nameを定義　文字列(複数文字)*/
    cout<<"文字を入力せよ";
    cin>>c;
    cout<<"文字列を入力せよ";
    cin>>name;
    cout<<"文字は"<<c<<"\n文字列は"<<name;
}