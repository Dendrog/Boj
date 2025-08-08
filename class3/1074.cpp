#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
int n;
int rn;
int r,c;
int rnr,rnc;
int countss;

void bt(int sa, int sb,int ea,int eb){
	if (ea-sa == 1 && eb-sb == 1){
		if (sa == r && sb == c){
			cout << countss;
			exit(0);
		}
		countss++;
		return;
	}
	if (r < (int)rn/2 +rnr&& c < (int)rn/2 +rnc){
		rn = rn/2;
		bt(sa,sb,(sa+ea)/2,(sb+eb)/2);
	}
	else if (r < (int)rn/2 +rnr&& c >= (int)rn/2+rnc){
		rn = rn/2;
		rnc += rn;
		countss+=rn*rn;
		bt(sa,(sb+eb)/2,(sa+ea)/2,eb);
	}
	else if (r >= (int)rn/2+rnr && c < (int)rn/2+rnc){
		rn = rn/2;
		rnr += rn;
		countss+=rn*rn*2;
		bt((sa+ea)/2,sb,ea,(sb+eb)/2);
	}
	else if(r >= (int)rn/2+rnr && c >= (int)rn/2+rnc){
		rn = rn/2;
		rnr += rn;
		rnc += rn;
		countss+=rn*rn*3;
		bt((sa+ea)/2,(sb+eb)/2,ea,eb);
	}
}

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	cin >> n >> r >> c;
	rn = pow(2,n);
	bt(0,0,rn,rn);
}