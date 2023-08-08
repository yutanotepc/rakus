#include <bits/stdc++.h>
using namespace std;
int main(void){
    //入力
    int N,M;
    cin>>N>>M;
    vector<int> deg(N);
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        --a,--b;
        deg[b]++;
    }

    //deg[i]はそれぞれのbに入力された回数,それが0のdeg[i]が1つならそのiを出力,複数なら-1を出力
    int ans=-1;
        for(int i=0;i<N;i++){
            if(deg[i]==0){
                if(ans!=-1){ //ansが-1以外なら
                    cout<<-1<<endl;
                    exit(0);
                }else{ //ans==-1なら
                    ans=i+1;
                }
            }
        }
    cout<<ans<<endl;
    return 0;
}