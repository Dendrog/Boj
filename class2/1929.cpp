#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    int k;
    for (int i = n;i<=m;i++){
        int sq = sqrt(i);
        for (k=2;k<=sq;k++){
            if (!(i%k))
                break;
        }
        if (k > sq && i > 1)
            cout << i << "\n";
    }
}