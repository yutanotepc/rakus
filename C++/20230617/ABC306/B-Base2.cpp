#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    bool A[64];
    unsigned long SUM=0;
    for(int i=0;i<64;i++) cin>>A[i];
    for(int i=0;i<64;i++){
        double j=double(i);
        int sum=0;
        if(A[i]==true) sum=pow(2.0,j);
        SUM+=sum;
    }
    cout<<SUM<<endl;
    return 0;
}