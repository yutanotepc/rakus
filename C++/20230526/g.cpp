/*列挙体*/
#include <iostream>
using namespace std;
int main(){
    enum animal {Dog,Cat,Moneky,Invalid}; /*enum 列挙体名 {列挙子1,列挙子2,}　animal型 先頭から0,1,2,と番号が降られている*/
    int type; /*int型変数type,宣言*/
    do{
        cout<<"0:犬 1:猫 2:猿 3:終了\n";
        cin>>type; /*int型変数type=0 or 1 or 2 or 3*/
    }while(type<Dog||type>Invalid); /*Dog==0 Cat==1 Monkey==2 Invalid==3*/

    if(type!=Invalid){
        animal selected=static_cast<animal>(type); /*animal型selected変数,int型type変数を,animal型へと型変換する*/
        switch(selected){
            case Dog:cout<<"ワンワン"; break;
            case Cat:cout<<"ニャンニャン"; break;
            case Moneky:cout<<"ワンワン"; break;
        }
    }
}