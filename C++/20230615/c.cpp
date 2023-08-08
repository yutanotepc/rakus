#include <iostream>
#include <string>
using namespace std;
int main(void){
    string s;           //string型変数sを定義する
    cin>>s;             //string型変数sに、入力
    int counter=0;      //int型変数counterを、=0で初期化
    if(s[0]=='1') ++counter;
    if(s[1]=='1') ++counter;
    if(s[2]=='1') ++counter;
    cout<<counter<<endl;
    return 0;
}
    /*
    int a[2];
    int count=0;
    cin>>a[2];
    for(int i=0;i<3;i++){
        if (a[i] =='1'){
            ++count;
        }
    }
    cout<< count <<endl;*/

    /*
    int times;
    char str[2];
    cin>>str;
    for(int i=0;i<3;i++){
        if(str[i]=="")
    }

    */