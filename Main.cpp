#include<iostream>
#include<bits/stdc++.h>
using namespace std;

ifstream f("Data.in");
ofstream g("Data.out");

int main(){
    int a, b, sum = 0;

    f>>a>>b;
    sum = a + b;

    g<<sum;
    return 0;
}