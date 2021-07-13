#include<bits/stdc++.h>
using namespace std;
char input[1000];
int Stack[1000], in;

void push(int x){
    Stack[++in] = x;
}

bool isempty(){
    if(in > 0) return false;
    else return true;
}


bool verify(char input[]){
    in = 0;
    int n = strlen(input);
    for(int i = 0; i < n; i++){
        if(input[i] == '{') push(1);
        if(input[i] == '[') push(2);
        if(input[i] == '(') push(3);

        if(input[i] == '}'){
            if(isempty() || Stack[i] != 1) return false;
            else{
                Stack[in] = 0;
                --in;
            }
        }
        if(input[i] == ']'){
            if(isempty() || Stack[i] != 2) return false;
            else{
                Stack[in] = 0;
                --in;
            }
        }
        if(input[i] == ')'){
            if(isempty() || Stack[i] != 3) return false;
            else{
                Stack[in] = 0;
                --in;
            }
        }
    }
        if(in == 0) return true;
        else return false;
    
}

int main(){
    cin>>input;
    cout<<verify(input);
    return 0;
}
