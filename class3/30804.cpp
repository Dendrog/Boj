#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
vector<int> v;
int m[10];
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int k;
        cin >> k;
        v.push_back(k);
    }
    int start,end;
    start = 0;
    end = 0;
    int result = 0;
    int counts = 0;
    while (1){
        if (start > end){
            break;
        }
        if (start >= n){
            break;
        }
        if (end >= n){
            break;
        }
        if (!m[v[end]])
            counts++;
        m[v[end]]++;
        while (counts > 2){
            m[v[start]]--;
            if (!m[v[start]])
                counts--;
            start++;
        }
        if (counts <= 2){
            result = max(result,end - start + 1);
            end++;
        }
    }
    cout << result;
}