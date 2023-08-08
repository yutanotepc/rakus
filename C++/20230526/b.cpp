#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main(void){
    srand(time(NULL));
    int lucky=rand()%10;
    cout<<"今日のラッキーナンバーは"<<lucky<<"です。";
}