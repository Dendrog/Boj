#include<bits/stdc++.h>
using namespace std;
using graph = vector<vector<int>>;
graph g;
int c[2];
void de(int starty,int startx, int endy, int endx){
    int flag = 0;
    for (int i=starty;i<endy;i++){
        for (int k=startx;k<endx;k++){
            if (g[i][k] != g[starty][startx]){
                flag =1;
                break;
            }
        }
        if (flag)
            break;
    }
    if (flag){
        de(starty,startx,(starty+endy)/2,(startx+endx)/2);
        de(starty,(startx+endx)/2,(starty+endy)/2,endx);
        de((starty+endy)/2,startx,endy,(startx+endx)/2);
        de((starty+endy)/2,(startx+endx)/2,endy,endx); 
    }
    else
        c[g[starty][startx]]++;

}

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n;
    cin >> n;
    
    g.assign(n,vector<int>(n,0));
    for (int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            int l;
            cin >> l;
            g[i][k] = l;
        }
    }
    de(0,0,n,n);
    cout << c[0] << " " << c[1];
}