#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int board[100][100]={0,};
	unsigned long long dp[100][100]={0,};

	for(int i=0;i<n;i++){
		for (int k=0;k<n;k++){
			cin >> board[i][k];
		}
	}
	dp[0][0] = 1;

	for(int i=0;i<n;i++){
		for (int k=0;k<n;k++){
			if (dp[i][k] != 0 && board[i][k] != 0){
				dp[i+board[i][k]][k] += dp[i][k];
				dp[i][k+board[i][k]] += dp[i][k];
			}
		}
	}

	cout << dp[n-1][n-1];
}