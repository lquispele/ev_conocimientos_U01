#include <iostream>
#include<unistd.h>
using namespace std;
int main(){
    int n1,n2,c=0, i=1, j=1;
    do{
        cout<<"Ingrese lo numeros que van a ser comparados: \n";
        cin>>n1;    //el primer numero
        cin>>n2;    // el segundo numero
        cout<<"Los divisores comunes de "<<n1<<" y "<<n2<<" : ";

    while(i<=n1&&i<=n2){
        if(n1%i==0&&n2%i==0){
            if(n1==i){
                cout<<i<<" "<<endl;
            }else{
                cout<<i<<" ";
            }
            c++;
        }
        i++;
        j++;
    }
    if(c>1){
        cout<<"\nNo son PESI"<<endl;
    } else{
        cout<<"\nSon PESI"<<endl;
    }
    sleep(5);
    system("clear");
    }while (n1>0&&n2>0);
}
