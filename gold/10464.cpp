#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int t;
    cin >> t;
    for (int i=0;i<t;i++){
        unsigned long long s,e;
        cin >> s >> e;
        unsigned long long result;
        switch(e % 4){
            case 0:
                result = e;
                break;
            case 1:
                result = 1;
                break;
            case 2:
                result = e+1;
                break;
            case 3:
                result = 0;
                break;
        }
        switch((s-1) % 4){
            case 0:
                result ^= s-1;
                break;
            case 1:
                result ^= 1;
                break;
            case 2:
                result ^= s;
                break;
            case 3:
                result ^= 0;
                break;
        }
        
        cout << result << "\n";
    }
}