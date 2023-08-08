/*P76,77 do文*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    string retry;

    do{
        int month;
        cout<<"季節を求めます\n"<<"何月ですか";
        cin>>month;

        if(month>=3&&month<=5)
            cout<<"それは春です";
        else if(month>=6||month<=8)
            cout<<"それは夏です";
        else if(month>=9||month<=11)
            cout<<"それは秋です";
        else if(month==12||month==1||month==2)
            cout<<"それは冬です";
        else
            cout<<"そんな月ありません";
        cout<<"\nもう一度？Y or N\n";
        cin>>retry;
    }while(retry=="Y"||retry=="y");
}