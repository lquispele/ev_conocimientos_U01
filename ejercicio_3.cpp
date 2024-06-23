#include<iostream>
#include<unistd.h>
using namespace std;
void suma(int);
int factorial(int);
int main(){
    int n,i=0;
    do{
    cout<<"Ingresar la cantidad de datos de la suma: ";
    cin>>n; //se elimino el "endl", no es para el cin
    if(n<0){
      i++;  
    } else{
    suma(n);
    }
    }while(i<3);
        if (i==3){
        system("clear");
        cout<<"Por favor espere 5 segundos. \n";
        sleep(5);
        system("clear");
        cout<<"Se bloqueo su acceso. Gracias"<<endl;
    }
}

void suma(int a){
    float s=0;
    for(int i=1;i<=a;i++){
        s=s+(float(factorial(i))/(2*i));
    }
    cout<<"La suma de la sumatoria es: "<<s<<endl;
    sleep(2);
    system("clear");
}
int factorial(int b){
    int f=1;
    if(b==1){
     f=1 ;  
    }else{
        f=b*factorial(b-1);
    }
    return f;
}