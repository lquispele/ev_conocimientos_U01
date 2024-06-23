#include<iostream>
using namespace std;
float suma(int);
int factorial(int);
int main(){
    int n,i=1;
    float sum;
    do{
    cout<<"Ingresar la cantidad de datos de la suma: ";
    cin>>n; //se elimino el "endl", no es para el cin
    if(n<0){
      i++;  
    } else{
    sum=suma(n);
    cout<<"La suma de la sumatoria es: "<<sum<<endl;
    }
    }while(i<=3);
}
float suma(int a){
    float s=0;
    for(int i=1;i<=a;i++){
        s=s+(float(factorial(i))/(2*i));
    }
    return s;
}
int factorial(int b){
    int f=1;
    for(int i=2;i<=b;i++){
        f=f*i;
    }
    return f;
}