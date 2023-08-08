#include <iostream>
using namespace std;
int find(int i){
    int sum=0;
    while(i>0){
        sum=sum+i%10;
        i =i/10;
    }
    return sum;
}
int main(void){
    int X,A,B;
    cin>>X>>A>>B;
    int total=0;
    for(int i=1;i<=X;i++){
        //int aa=((i/10)+(i%10)); これだと99までしか
        int sum=find(i);
        if(A<=sum && sum<=B) total=total+i;
    }
    cout<<total<<endl;
    return 0;
}