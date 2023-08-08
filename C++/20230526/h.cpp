/**/
#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
    int a[5]; double b[7]; int c; int abc[9];
    cout<<"配列aの型:"<<typeid(a).name()    <<'\n';
    cout<<"aの要素型:"<<typeid(a[0]).name() <<'\n';
    cout<<"配列bの型:"<<typeid(b).name()    <<'\n';
    cout<<"bの要素型:"<<typeid(b[0]).name() <<'\n';
    cout<<"変数cの方"<<typeid(c).name()<<'\n';
    cout<<"配列bの型:"<<typeid(abc).name()    <<'\n';
    cout<<"bの要素型:"<<typeid(abc[0]).name() <<'\n';
}