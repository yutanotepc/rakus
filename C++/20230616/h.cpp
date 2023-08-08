#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int H, W;
    int sum = 0; 
    cin >> H >> W;
    
    //vector<型名> 変数名
    vector<vector<char>> data(H, vector<char>(W));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){cin >> data.at(i).at(j);}
    }
    
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(data.at(i).at(j)=='.'){
                if(i-1>=0 && j-1>=0){
                    if(data.at(i-1).at(j-1) == '#'){sum++;}
                }
                if(i-1>=0){
                    if(data.at(i-1).at(j) == '#'){sum++;}
                }
                if(i-1>=0 && j+1<=W-1){
                    if(data.at(i-1).at(j+1) == '#'){sum++;}
                }
                if(j-1>=0){
                    if(data.at(i).at(j-1) == '#'){sum++;}
                }
                if(j+1<=W-1){
                    if(data.at(i).at(j+1) == '#'){sum++;}
                }
                if(i+1<=H-1 && j-1>=0){
                    if(data.at(i+1).at(j-1) == '#'){sum++;}
                }
                
                if(i+1<=H-1){
                    if(data.at(i+1).at(j) == '#'){sum++;}
                }
                if(i+1<=H-1 && j+1<=W-1){
                    if(data.at(i+1).at(j+1) == '#'){sum++;}
                }
                char a[5];
                sprintf(a, "%d", sum); //int型変数sumを、char型配列aに代入
                data.at(i).at(j) = a[0];
                sum=0; 
                } else {continue;}
        }
    }
    //表示
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cout<<data.at(i).at(j);
        }
        cout<<endl;
    }
    return 0;
}