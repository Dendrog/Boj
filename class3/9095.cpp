#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n[11];
    n[0] = 0;
    n[1] = 1;
    n[2] = 2;
    n[3] = 4;
    int t;
    cin >> t;
    for(int i=4;i<=10;i++){
        n[i] = n[i-1] + n[i-2] + n[i-3];
    }
    for (int i=0;i<t;i++){
        int l;
        cin >> l;
        cout << n[l] << "\n";
    }
}