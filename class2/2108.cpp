#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> v;
	vector<pair<int,int>> vp;
	//map<int,int> m;

	for (int i=0;i<n;i++){
		int inp;
		cin >> inp;
		v.push_back(inp);
		//m[inp]++;
	}
	sort(v.begin(),v.end());
	double sum = 0;
	int count = 0;
	for (int i=0;i<v.size();i++){
		sum+=v[i];
		//count1++;
		count++;
		if (i<v.size()-1){
			if (v[i] != v[i+1]){
				vp.push_back({v[i],count});
				count = 0;
			}
		}
	}
	vp.push_back({v[v.size()-1],count});
	/*if (!vp.size())
		vp.push_back({v[v.size()-1],1});*/
	stable_sort(vp.begin(),vp.end(),[](pair<int,int> a, pair<int,int> b){return a.second > b.second;});
	cout << floor(floor((sum / (double)v.size()) * 10.0)/10.0 +0.5) << "\n";
	cout << v[(v.size()-1) / 2] << "\n";
	if (vp.size() == 1)
		cout << vp[0].first << "\n";
	else if ( vp[0].second > vp[1].second)
		cout << vp[0].first << "\n";
	else {
		cout << vp[1].first << "\n";
	}
	cout << v[v.size()-1] - v[0];
}