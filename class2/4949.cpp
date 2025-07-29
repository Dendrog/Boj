#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> v;
	
	for(;;){
		string st;
		getline(cin,st);
		if (st[0] == '.')
			break;
		v.push_back(st); 
	}
	for (int i=0;i<v.size();i++){
		int flag = 0;
		stack<char> s;
		for (int k=0;k<v[i].length();k++){
			if (v[i][k]=='(' || v[i][k]=='[')
				s.push(v[i][k]);
			if (v[i][k]==')'){
				if (s.size() && s.top()== '(')
					s.pop();
				else{
					cout << "no\n";
					flag =1;
					break;
				}
			}
			if (v[i][k]==']'){
				if (s.size() && s.top() == '[')
					s.pop();
				else{
					cout << "no\n";
					flag =1;
					break;
				}
			}
		}
		if(!flag && !s.size())
			cout << "yes\n";
		else if(!flag && s.size())
			cout << "no\n";
	}
}