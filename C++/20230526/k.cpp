#include <iostream>
#include <string>
using namespace std;

class Account{
public:
    string name;
    string number;
    long balance;
};

int main(void){
    Account suzuki;
    Account takeda;
    suzuki.name="鈴木龍一";
    suzuki.number="12345678";
    suzuki.balance=1000;

    takeda.name="武田浩文";
    takeda.number="87654321";
    takeda.balance=200;

    suzuki.balance-=200;
    takeda.balance+=100;
    cout<<"■鈴木君の口座:\""<<suzuki.name<<"\"("<<suzuki.number<<")"<<suzuki.balance<<"円\n";
    cout<<"■武田君の口座:\""<<takeda.name<<"\"("<<takeda.number<<")"<<takeda.balance<<"円\n";
}

