#include<bits/stdc++.h>
using namespace std;
int main(void){
    int NoP,NoI;
    cin>>NoP>>NoI;
    vector<int> A(NoI+1),B(NoI+1),ANS(NoI+1);
    for(int i=1;i<=NoP;i++){
        ANS[i]=i;
    }
    for (int i=1;i<=NoI;i++){
        cin>>A[i]>>B[i];
    }
    for(int i=1;i<=NoI;i++){
        ANS.erase(ANS.begin()+B[i]);
    }
    int size=ANS.size();
    if(size=!1) cout<<-1;
    else for(int i=1;i<=NoP;i++) cout<<ANS[i];
    cout<<1<<endl;
    return 0;
}