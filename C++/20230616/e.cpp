#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string normal[4]={"dream","dreamer","erase","eraser"};
int main(void){
    string input; cin>>input;
    reverse(input.begin(),input.end());
    for(int i=0;i<4;i++) reverse(normal[i].begin(),normal[i].end());
    bool can=true;

    for(int i=0;i<input.size();){
        bool can2=false;
        for (int j=0;j<4;j++){
            string d=normal[j];
            if(input.substr(i,d.size()) ==d){
                can2=true;
                i+=d.size();
            }
        }
        if(can2==false){
            can=false;
            break;
        }
    }
    if(can==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}