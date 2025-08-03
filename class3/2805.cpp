#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n,m;
    cin >> n >> m;
    vector<long long> v;
    for (int i=0;i<n;i++){
        int l;
        cin >> l;
        v.push_back(l);
    }
    sort(v.begin(),v.end());
    long long int start, mid ,end;
    start = 0;
    end = v[v.size()-1];
    long long r;
    while(start <= end){
        mid = (start + end) / 2;
        long long result = 0;
        for (int i=0;i<n;i++){
            result += (v[i] - mid) > 0 ?  (v[i] - mid) : 0;
        }
        if (result >= m){
            start = mid +1;
            r = mid;
        }
        else{
            end = mid - 1;
        }
    }
    cout << r;
}