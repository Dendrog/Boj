#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	int k = 0;
	int r=0;
	for (int i=1;;i++){
		if (n ==1)
			break;
		if (i%2)
			k++;
		if (i % n == 0){
			r+=k;
			n = n - k;
			k = 0;
		}
	}
	cout << r;
}