#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> cnt(n+1),ans;
    for (int i=0;i<3*n;i++){
        int a;
        cin >> a;
        ++cnt[a];
        if (cnt[a] == 2) ans.push_back(a);
    }
    for (int i=0;i<n;i++) {
        cout << ans[i] << (i == n - 1 ? '\n' : ' ');
        //3項演算子 式1 ? 式2 : 式3　式1が真なら,式2
    }
}
