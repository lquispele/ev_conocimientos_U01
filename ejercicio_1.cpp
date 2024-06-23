#include <iostream>
#include <unistd.h>
using namespace std;
//Problema 1
int main (){
    int op1, op2,r,r1,i=0;
    char op;
    do{
    cout<<"Ingrese los operadores antes de hacer la operacion:\n";
    cin>>op1>>op2;
    cout<<"(+)suma\n(-)resta\n(*)multiplicacion\n(/)division \nIngrese la simbologia que usara: ";
    cin>>op;
    switch(op){
        case '+':
        r=op1+op2; 
        cout<<"La suma es: "<<r<<endl;sleep(4);
        system("clear");break;
        case '-':
        r=op1-op2; 
        r1=op2-op1; 
        cout<<" Las restas son: "<<r<<" y "<<r1<<endl;sleep(4);
        system("clear");break;
        case '*':
        r=op1*op2; 
        cout<<"La multiplicacion es: "<<r<<endl;sleep(4);
        system("clear");break;
        case '/':
        if(op!=0){
        r=op1/op2;
        cout<<"La division es: "<<r<<endl;sleep(4);
        system("clear");break;
        } else{
            cout<<"Es indeterminado."<<endl;sleep(4);
            system("clear");break;
        }
        default:
        cout<<"Ingrese otra opcion, porfavor."<<endl; sleep(2); 
        system("clear");i++;break;
    }
    }while (i!=3);
    cout<<"Espere 5 segundos...";
    sleep(5);
    cout<<"Gracias por usar el programa. Usted supero el limite de intentos.";
}