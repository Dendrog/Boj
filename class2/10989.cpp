#include<iostream>

using namespace std;
int main(){
    int a[10001] = {0,};
    int n;
    int k;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> k;
        a[k]++;
    }
    for (int i=1;i<10001;i++){
        for (int k = 0;k<a[i];k++)
            printf("%d\n",i);
    }
}