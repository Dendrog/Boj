#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
//graph g;
map<int,int> g;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n,m,b;
    cin >> n >> m >> b;
    //g.resize(n);
    unsigned long long bn = b;
    for (int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            int l;
            cin >> l;
            bn+=l;
            g[l]++;
        }
    }
    bn = bn / (n*m);
    unsigned long long result_time = ULLONG_MAX;
    int result_b=0;
    for (int q = 0;q<=bn;q++){
        unsigned long long time = 0;
        for(auto k : g){
            if (k.first > q){
                time += (k.first - q) * 2 * k.second;
            }
            else if (k.first < q){
                time += (q - k.first) * k.second;
            }
        }
        result_time = min(time,result_time);
        if (result_time == time)
            result_b = max(q,result_b);
    }
    cout << result_time << " " << result_b;
}