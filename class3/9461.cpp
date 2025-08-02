#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int t;
    cin >> t;
    unsigned long long re[101];
        re[1]=1;
        re[2] =1;
        re[3] = 1;
    for (int k=4;k<=100;k++){
        re[k] = re[k-2] + re[k-3];
    }
    for (int i=0;i < t;i++){
        int n;
        cin >> n;
        cout << re[n] << "\n";
    }
}