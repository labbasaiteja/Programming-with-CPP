#include<bits/stdc++.h>
using namespace std;
ifstream f("data5.in");
ofstream g("data5.out");
int A[100], n, i;
int main(){
    f>>n;
    for(int i = 0; i < n; ++i){
        int x;
        f>>x;
        x += 10;
       // ++A[i]; //freq count of element
    }
    if(A[5] > 0){ g<<"Element is present"; }
    else{  g<<"Element is not present"; }
    return 0;
}