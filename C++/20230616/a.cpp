#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
    int N,A[110];
    cin>>N;
    for(int i=0;i<N;i++) cin>>A[i];
    sort(A,A+N,greater<int>());

    int Alice=0,Bob=0;
    for(int i=0;i<N;i++){
        if(i%2==0) {Alice+=A[i];}
        else{Bob+=A[i];}
    }
    cout<<Alice-Bob<<endl;


    return 0;
}