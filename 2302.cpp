#include <iostream>
using namespace std;
int main(){
	int n;
	int num;
	cin >> n;
	cin >> num;
	unsigned long long result = 1;
	unsigned long long dp[41]={0,};
	dp[1] = 1;
	dp[2] = 2;
	int k;
	int keep=0;
	int prev = 0;
	for(int i=0; i < num ; i++){
		int now;
		cin >> now;
		keep = now;
		now -=prev;
		for (k=1;k<now;k++){
			if (dp[k] == 0)
				dp[k] = dp[k-1] + dp[k-2];
		}
		if (now - 1 > 0)
			result *= dp[now - 1];
		prev = keep;
	}
	n++;
	n-=keep;
	for (k=1;k<n;k++){
			if (dp[k] == 0)
				dp[k] = dp[k-1] + dp[k-2];
		}
	if (n - 1 > 0)
		result *= dp[n-1];
	cout << result;
}