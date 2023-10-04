//tipo de cambio de Q a $
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float quetzal,dolar,resultado;
    cout <<"convertidor de quetzales a dolar"<<endl;
    cout <<"ingrese la cantidad en quetzales"<<endl;
    cin >> quetzal;

    resultado=(quetzal*0.13);

    cout <<"su tipo de cambio en Q "<<quetzal<<" es igual a $"<<resultado<<endl;

    system("pause");
    return 0;
}