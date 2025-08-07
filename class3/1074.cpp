#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
//int **g[32768][32768];
graph g;
int n;
int rn;
int r,c;
int countss;

void bt(int sa, int sb,int ea,int eb){
	if (ea-sa == 1 && eb-sb == 1){
		g[sa][sb] = countss++;
		if (sa == r && sb == c){
			cout << g[sa][sb];
			exit(0);
		}
		return;
	}
	bt(sa,sb,(sa+ea)/2,(sb+eb)/2);
	bt((sa+ea)/2,sb,ea,(sb+eb)/2);
	bt(sa,(sb+eb)/2,(sa+ea)/2,eb);
	bt((sa+ea)/2,(sb+eb)/2,ea,eb);
}

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	cin >> n >> r >> c;
	g.resize(n);
	for (int i=0;i<n;i++){
		g[i].resize(n);
	}
	rn = pow(2,n);
	bt(0,0,rn,rn);
}