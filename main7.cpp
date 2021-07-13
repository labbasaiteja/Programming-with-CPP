#include<bits/stdc++.h>
using namespace std;
ifstream f("data7.in");
int A[100], n, i;
int maxi;
int main(){
    f>>n;
    for(int i = 0; i < n; ++i){
        int x;
        f>>x;
        //x += 10;
       ++A[x]; //freq count of element
       maxi = max(maxi, x);
    }
    for(int i = 0; i <= maxi; i++){
        if(A[i] > 0){
            for(int j = 0; j < A[i]; i++){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}