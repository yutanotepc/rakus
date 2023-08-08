#include <bits/stdc++.h>
using namespace std;
int main(void){
    unsigned long long ans=0;
    for(int i=0;i<64;i++){
        unsigned long long a; //int aでもよさそうだが、aを多く左シフトするからダメ
        cin>>a;
        ans+=a<<i; //aをiコ左シフト
    }
    cout<<ans<<endl;
    return 0;
}