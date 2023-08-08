#include <iostream>
#include <string>
#include <charconv>
using namespace std;
int main(void){
    int H,W,SUM=0;
    string A[3],B[3]={{"00000"},{"00000"},{"00000"}};
    cin>>H>>W>>A[0]>>A[1]>>A[2];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            if(A[i][j]=='#') {
                B[i][j]='#';
            }
            else if (i==0&&j!=0&&j!=5){
                if(A[i][j+1]=='#') SUM+=1;
                if(A[i][j-1]=='#') SUM+=1;
                if(A[i+1][j-1]=='#') SUM+=1;
                if(A[i+1][j]=='#') SUM+=1;
                if(A[i+1][j+1]=='#') SUM+=1;
            }
            else if (i==0&&j==0){
                if(A[i][j+1]=='#') SUM+=1;
                if(A[i+1][j]=='#') SUM+=1;
                if(A[i+1][j+1]=='#') SUM+=1;
            }
            else if (i==0&&j==5){
                if(A[i][j-1]=='#') SUM+=1;
                if(A[i+1][j-1]=='#') SUM+=1;
                if(A[i+1][j]=='#') SUM+=1;
            }
            /*
            if(i>0&&j>0&&i<H&&j<W) {
                if(A[i][j+1]=='#') SUM+=1;}
            
            
            if(i>0&&j>0&&i<H&&j<W) {if(A[i][j-1]=='#') SUM+=1;}
            if(i>0&&j>0&&i<H&&j<W) {if(A[i-1][j]=='#') SUM+=1;}
            if(i>0&&j>0&&i<H&&j<W) {if(A[i-1][j+1]=='#') SUM+=1;}
            if(i>0&&j>0&&i<H&&j<W) {if(A[i-1][j-1]=='#') SUM+=1;}
            if(i>0&&j>0&&i<H&&j<W) {if(A[i+1][j]=='#') SUM+=1;}
            if(i>0&&j>0&&i<H&&j<W) {if(A[i+1][j+1]=='#') SUM+=1;}
            if(i>0&&j>0&&i<H&&j<W) {if(A[i+1][j-1]=='#') SUM+=1;}*/
            
            B[i][j]=string(SUM);
            SUM=0;
        }
    }
    for(int i=0;i<3;i++){
        cout<<B[i]<<endl;
    }
    return 0;
}
