#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int i;
	cin >> i;
	for(int k=0;k*3 <= i;k++){
		if (!((i-(k*3)) % 5)){
			cout << k + (i-(k*3)) / 5;
			return 0;
		}
	}
	cout << -1;
}