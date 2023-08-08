#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	vector<int> arr(n+1,1);
	for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        arr[b]=0;
	}
	int ans=-1;
	for(int i=1;i<=n;i++){
            if(arr[i]){
                if(ans==-1) ans=i;
                else{
                    ans=-1;
                    break;
                }
            }
	}
	cout<<ans;
}