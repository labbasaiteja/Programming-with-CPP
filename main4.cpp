#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int A[3][5];         //if we remove global variable we get all rows
                     // global variable value is zero
void printing(int r){
    for(int i = 0; i < 5; ++i){
       cout<<A[r][i]<<" "; 
    }
    cout<<endl;
}
int main(){
    int i;
    for(i = 0; i < 3; ++i){
        printing(i);
    }
    cout<<i<<endl;
    return 0;
}