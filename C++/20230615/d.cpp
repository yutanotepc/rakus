#include <iostream>
using namespace std;
int main(void){
    int count;      //整数の個数
    cin>>count;
    int A[210];     //正の整数,たくさん
    for(int i=0;i<count;i++) cin>>A[i];
    int res=0;      //操作の回数

    while(true){    //break;しない限り永遠に続く
        bool exist_Odd=false;
        for (int i=0;i<count;i++){
            if(A[i]%2!=0) exist_Odd=true;
        }
        if (exist_Odd) break;
        for(int i=0;i<count;i++) A[i]/=2;
        res++;   
    }

    cout<<res<<endl;
    return 0;
}


