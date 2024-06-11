//FALTA AUTOR Y FECHA

#include <iostream>
using namespace std;
//imprime tabla
void TablaMultiplicar(int tabla)
{
    cout<<endl<<"tabla de multiplicar del  "<<tabla;
    for(int k=1; k<=12; k++)
    {
      cout<<endl<<tabla <<"x"<< k << tabla*k;
    }


}
//funcion imprimir la tabla
// parametro de 3 enteros ; el primero es la tabla
//el segundo limite inferior, el tercero limite superior
void TablaLimites(int tabla, int inicio, int fin)
{
   cout<<endl<<"tabla de multiplicar del  "<<tabla;
    for(int k=inicio; k<=fin; k++)
    {
      cout<<endl<<tabla <<"x"<< k << tabla*k;
    } 
}

int main()
{
    cout<<endl<<"Funcion que calcula una tabla de multiplicar" ;
    TablaMultiplicar(5);
    TablaMultiplicar(8);
    TablaMultiplicar(12);
    TablaMultiplicar(6);
    // pida al usuario la tabla
    int num;
    cout<<endl<<"ingresa la tabla para calcular: ";
    cin>>num;
    TablaMultiplicar(num);

    TablaLimites(5,10,15);
    TablaLimites(2,5,12);

    
    return 0;
}
