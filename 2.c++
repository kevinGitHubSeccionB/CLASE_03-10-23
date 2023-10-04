//calcular el area de un triangulo
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float base,altura,resultado;
    cout <<"calculo de area de un triangulo"<<endl;
    
    cout <<"ingrese el valor de la base"<<endl;
    cin >> base;

    cout <<"ingrese el valor de la altura"<<endl;
    cin >> altura;

    resultado=(base*altura)\2;

    cout <<"su calculo del area es "<<resultado<< "unidades cuadradas"<<endl;

    system("pause");
    return 0;
}