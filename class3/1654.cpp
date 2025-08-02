#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n,m;
    cin >> n >> m;
    vector<int> v;
    for (int i=0;i<n;i++){
        int k;
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    long long int start,end,mid;
    start = 1;
    end = v[v.size()-1];
    
    long long int r = 0;
    for (;start <= end;){
        mid = (end + start) / 2;
        long long int result =0;
        for (int k=0;k<n;k++){
            result += (long long int)(v[k] / mid);
        }
        if (result < m){
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
    }
    cout << mid;
}