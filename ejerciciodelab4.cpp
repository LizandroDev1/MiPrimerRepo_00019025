#include <iostream>
#include <cmath>
using namespace std;

int main(){
// definir una edad 
int edad =0;
cout<<"precio de entredad del parque"<<endl;
cout<<"/n ingresa tu edad para asignarte un precio";
cin>> edad;

if(edad <=5){
cout<<edad<<"tu pago es de 0";
}else if(edad >= 5 and edad <= 12 ){
    cout<<edad<<"tu pago es de 5 dolares";
}else if(edad >12){
    cout<<edad<<"tu pago es de 10 dolares";

}else{
    cout<<"pon una edad valida";
}

    return 0;

}
