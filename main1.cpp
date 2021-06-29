#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 8, b = 3, maxi;
    maxi = max(a, b);
    
    swap(a, b);
    int n = 2;
    double cuberoot;
    cuberoot = pow((double) (n),  1.0/ 3 ); //1.0 is expoential Eg:pow(2,3)=8 
    cout<<cuberoot<<endl;
    cout<<fixed<<setprecision(10)<<cuberoot<<endl;
    return 0;
}
