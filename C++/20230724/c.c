//ABC306 D-Poisonous Full-Course
#include <bits/stdc++.h>
using namespace std;
int main(){
	//入力フェーズ
    int n;
	cin >> n;
	vector<long long> x(n); //1,毒　0,無毒
	vector<long long> y(n); //おいしさ
	for (int i=0; i < n; ++i) {
		cin >> x[i] >> y[i];
	}

	vector<vector<long long>> dp(n + 1, vector<long long>(2,0));
	dp[0][0] = 0;
	for (int i=0;i<n;++i) {
        dp[i+1][0]=dp[i][0];
        dp[i+1][1]=dp[i][1];
		if (x[i] == 0) {
			dp[i+1][0] = max(dp[i+1][0]/*食べない*/, dp[i][0]+y[i]/*現在,0無毒*/);
            dp[i+1][0]=max(dp[i+1][0],dp[i][1]+y[i] /*現在,1有毒*/); 
		}
		if (x[i] == 1) {
			dp[i+1][1] = max(dp[i+1][1]/*食べない*/, dp[i][0]+y[i]/*現在,0無毒*/); 
		}    
	}
	cout << max(dp[n][0], dp[n][1]) <<endl;
	return 0;
}