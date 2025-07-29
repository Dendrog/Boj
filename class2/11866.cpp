#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,k;
	cin >> n >> k;

	queue<int> v;
	cout << "<";
	for (int i =1; i<=n;i++)
		v.push(i);
	for(int i=1;v.size();i++){
		if (i % k){
			v.push(v.front());
			v.pop();
		}
		else{
			cout << v.front();
			if (v.size() != 1)
				cout << ", ";
			v.pop();
		}
	}
	cout << ">";
}
