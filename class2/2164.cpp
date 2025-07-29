#include<iostream>
#include<cmath>
#include<queue>
using namespace std;
int main(){
	int n;
	cin >> n;
	int k = 0;
	int r=0;
	queue<int> v;
	for (int i=1;i<=n;i++){
		v.push(i);
	}
	for (int i=1;v.size()>1;i++){
		if (i%2)
			v.pop();
		else{
			v.push(v.front());
			v.pop();
		}
	}
	cout << v.front();
}