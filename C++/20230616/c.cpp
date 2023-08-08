#include <iostream>
using namespace std;
int main(void){
    int X,Y; cin>>X>>Y;
    int res10000=-1,res5000=-1,res1000=-1;
    for(int a=0;a<=X;a++){
        for(int b=0;b+a<=X;++b){
            int c=X-a-b;
            if(10000*a+5000*b+1000*c==Y) {
                res10000=a;
                res5000=b;
                res1000=c;
            }
        }
    }
    cout<<res10000<<" "<<res5000<<" "<<res1000<<endl;
    return 0;
}