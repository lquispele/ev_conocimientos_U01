#include <iostream>
#include<unistd.h>
using namespace std;
int main(){
    int n1,n2,c=0, i=1;
    do{
        cout<<"Ingrese lo numeros que van a ser comparados: \n";
        cin>>n1;    //el primer numero
        cin>>n2;    // el segundo numero

    while(i<=n1&&i<=n2){
        if(n1%i==0&&n2%i==0){
            c++;
        }
        i++;
    }
    if(c>1){
        cout<<"No son PESI"<<endl;
    } else{
        cout<<"Son PESI"<<endl;
    }
    sleep(2);
    system("clear");
    }while (n1>0&&n2>0);
}
