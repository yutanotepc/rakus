#include <bits/stdc++.h>
using namespace std;
int main(void){
    string board[50]; //string型配列board
    int X,Y,a=0;
    const int dx[]={0,-1,0,1},dy[]={-1,0,1,0};
    cin>>X>>Y;
    for(int i=0;i<X;i++) cin>>board[i];

    for(int i=0;i<X;i++){
        for(int j=0;j<Y;j++){
            if(board[i][j]=='#'){
                int count=0;
                for(int k=0;k<4;k++){
                    int x=i+dx[k];
                    int y=j+dy[k];
                    if(x>=0 && x<X && y>=0 && y<Y){
                        if(board[x][y]=='#') count++;
                    }                   
                }
                if(count==0) {a=1; break;}
            }
        }
    }
    
    if(a==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}