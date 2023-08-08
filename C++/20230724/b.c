//ABC306 D-Poisonous Full-Course
#include <bits/stdc++.h>
using namespace std;
int main()
{
	//入力フェーズ
    int n;
	cin >> n;
	vector<int> x(n); //1,毒　0,無毒
	vector<long long int> y(n); //おいしさ
	for (int i = 0; i < n; ++i) {
		cin >> x[i] >> y[i];
	}

	vector<vector<long long int>> dp(n + 1, vector<long long int>(2, 0)); //
	dp[0][0] = 0;
	for (int i=0;i<n;++i) {
		dp[i + 1][0] = dp[i][0]; //料理を食べない場合
		if (x[i] == 0) {
			dp[i + 1][0] = max(dp[i + 1][0]/*上にある*/, dp[i][0] + y[i]); //現在,0無毒
			dp[i + 1][0] = max(dp[i + 1][0]/*上にある*/, dp[i][1] + y[i]); //現在,1有毒
		}

		dp[i + 1][1] = dp[i][1]; //料理を食べない場合
		if (x[i] == 1) {
			dp[i + 1][1] = max(dp[i + 1][1]/*上にある*/, dp[i][0] + y[i]); //現在,0無毒
		}
	}

	cout << max(dp[n][0], dp[n][1]) <<endl;
	return 0;
}