#include <iostream>
#include <string>
using namespace std;
int main(void){
    int dx[]={-1,-1,-1,0,1,1,1,0};
    int dy[]={-1,0,1,1,1,0,-1,-1};
    string board[60]; int X,Y;
    cin>>X>>Y;
    for(int i=0;i<X;i++) cin>>board[i];
    for(int i=0;i<X;i++){
        for(int j=0;j<Y;j++){
            if(board[i][j]=='.'){
                int count=0;
                for(int k=0;k<8;k++){
                    int x=i+dx[k];
                    int y=j+dy[k];
                    if(x>=0 && x<X&&y>=0&&y<Y&&board[x][y]=='#') count++;
                }
                board[i][j]='0'+count;
            }
        }
    }
    for(int i=0;i<X;i++) cout<<board[i]<<endl;
    return 0;
}