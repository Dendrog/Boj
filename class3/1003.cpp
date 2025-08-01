#include<bits/stdc++.h>
using namespace std;
class fibo{
    public:
        int n;
        int zero;
        int one;
        fibo operator+(const fibo& obj) const {
            fibo f;
            f.n = this->n + obj.n;
            f.one = this->one + obj.one;
            f.zero = this->zero + obj.zero;
            return f;
        }
};
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n;
    cin >> n;
    fibo l[41];
    l[0] = {0,1,0};
    l[1] = {1,0,1};
    for (int i=2;i<=40;i++){
        l[i] = l[i-1] + l[i-2];
    }
    for (int i=0;i<n;i++){
        int k;
        cin >> k;
        cout << l[k].zero << " " << l[k].one << "\n";
    }
}