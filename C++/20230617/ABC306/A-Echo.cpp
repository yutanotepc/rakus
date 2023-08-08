#include <iostream>
#include <string>
using namespace std;
int main(void){
    int N;
    string S,SS,SSS;
    cin>>N>>S;
    SS=S;
    for(int i=0;i<N;i++){
        SSS.push_back(char(S[i]));
        SSS.push_back(char(SS[i]));
    }
    cout<<SSS<<endl;
    return 0;
}