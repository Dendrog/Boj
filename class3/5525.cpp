#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,m;
	std::string s;
	std::cin >> n >> m >> s;
	vector <int> st;
	std::string tmp = "";
	int r = 0;
	char t = 'I';

	int save = 0;
	for (int i =0; i < m-1;i++){
		if (s[i] == s[i+1]){
			if (save)
				st.push_back(save);
			save = 0;
		}
		if (i > 0 && s[i] == 'O' && s[i-1] == 'I' && s[i+1] == 'I')
			save++;
	}
	if (save)
		st.push_back(save);
	for (int i=0;i<st.size();i++){
		if (st[i] >= n)
			r += st[i] - n +1;
	}
	/*for (int i=0;i<n*2+1;i++){
		tmp+=t;
		t = t == 'I' ? 'O' : 'I';
	}
	for (int i=0;i<m;i++){
		if (s.find(tmp,i) != std::string::npos){
			r++;
			i = s.find(tmp,i);
		}
	}*/
	std::cout << r;
} 