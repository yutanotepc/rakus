#include<bits/stdc++.h>
using namespace std;
#define N 100
int main(void){
    int num,ans=0,tmp=0;
    int P[N];
    cin>>num;
    for(int i=1;i<=num;i++){
        cin>>P[i];
    }
    for(int i=2;i<=num;i++){
        if(P[1]<=P[i]) {
            tmp=P[i]-P[1]+1;
            if(tmp>ans){
                ans=tmp;
            }
            tmp=0;
        }
    }
    cout<<ans<<endl;
    return 0;
}