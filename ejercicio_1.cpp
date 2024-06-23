#include <iostream>
using namespace std;
//Problema 1
int main (){
    int op1, op2,r;
    char op;
    cin>>op1>>op2>>op;
    switch(op){
        case '+':
        r=op1+op2; break;
        case '-':
        r=op1-op2; break;
        case '*':
        r=op1*op2; break;
        case '/':
        r=op1/op2; break;
    }
    cout<<r;
}