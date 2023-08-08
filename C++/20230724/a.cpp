#include <string>
#include <iostream>
using namespace std;
int main(void){
    string suzuki_name="鈴木龍一";
    string suzuki_num="12345678";
    long suzuki_balance=1000;

    string takeda_name="武田浩文";
    string takeda_num="87654321";
    long takeda_balance=200;
    suzuki_balance-=200;
    takeda_balance+=100;
    cout<<"■鈴木君の口座：\""<<suzuki_name<<"\"("<<suzuki_num<<")"<<suzuki_balance<<"円\n";
    cout<<"■武田君の口座：\""<<takeda_name<<"\"("<<takeda_num<<")"<<takeda_balance<<"円\n";
    return 0;
}