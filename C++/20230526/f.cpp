#include <iostream>
using namespace std;
int main(){
    int hand;
    do{
        cout<<"手を選んでください(グー:0,チョキ:1,パー:2)\n";
        cin>>hand;
    }while(hand<0||hand>2);
    switch(hand){
        case 0:cout<<"グー"; break;
        case 1:cout<<"チョキ"; break;
        case 2:cout<<"パー"; break;
    }
    
}