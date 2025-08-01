#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    vector<int> v;
    int l[300];

    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int q;
        cin >> q;
        v.push_back(q);
    }
    l[0] = v[0];
    if (n > 1)
        l[1] = v[0] + v[1];
    if (n > 2)
        l[2] = max(v[0],v[1]) + v[2];
    for (int i=3;i<n;i++){
        l[i] = max(l[i-2] + v[i], l[i-3] + v[i-1] + v[i]); 
    }
    cout << l[n-1];
}