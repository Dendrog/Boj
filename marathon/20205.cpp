#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    
    int n,m;
    cin >> n >> m;
    for (int i=0;i<n;i++){
        vector<int> v;
        for (int k=0;k<n;k++){
            int q;
            cin >> q;
            v.push_back(q);
        }
        for (int w=0;w<m;w++){
            for (int k=0;k<m*n;k++)
                cout << v[k/m] << " ";
            cout << "\n";
        }
    }
}