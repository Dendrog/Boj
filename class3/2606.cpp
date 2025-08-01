#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<pair<int,int>> v;
    for (int i=0;i<m;i++){
        int q,p;
        cin >> q >> p;
        v.push_back({q,p});
    }
    sort(v.begin(),v.end());
    stack<int> s;
    set<int> se;
    se.insert(1);
    s.push(1);
    for (;s.size();){
        int p = s.top();
        auto k = find(v.begin(),v.end(),[p](in))
    }
}