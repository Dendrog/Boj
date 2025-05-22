#include<iostream>

using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	int set[101];
	int dp[10001]={1,};
	for (int i=1;i<=n;i++)
		cin >> set[i];
	
	for (int i=1; i <= n;i++){
		for (int q = set[i];q<=k;q++){
			dp[q] = dp[q] + dp[q-set[i]];
		}
	}
	cout << dp[k];
	
}