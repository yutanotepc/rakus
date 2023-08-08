#include <iostream> //iostreamファイル
#include <string> //stringファイル
using namespace std; //using namespace 名前空間名;

int main(void){
    cout<<"HElloWorld"<<endl; //coutはprintfみたい endlは改行
    
    /*int a;
    cin>>a;
    cout<<"a="<<a<<endl; //cinはscanf*/
    string s,t;
    t="入力された文字は、";
    cout<<"文字列を入力:";
    cin>>s;
    cout<<t+s<<"です"<<endl;
    return 0;
}