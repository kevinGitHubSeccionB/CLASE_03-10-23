#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float largo,ancho,alto,resultado,v;
   
    cout <<"calculador del valor a pagar por llenar una piscina segun el volumen de agua que necesite la piscina"<<endl;
    
    cout <<"ingrese el largo de la piscina"<<endl;
    cin >>largo;

   cout <<"ingrese el ancho de la piscina"<<endl;
    cin >>ancho;
    
    cout <<"ingrese el alto de la piscina"<<endl;
    cin >>alto;
    
    v=(largo*ancho*alto);

resultado=(v*9.75);

    cout <<"El valor a pagar por el usuario es de Q"<<resultado<<endl;

    system("pause");
    return 0;
}