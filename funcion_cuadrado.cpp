//FALTA AUTOR Y FECHA


#include <iostream>
using namespace std;

int CuadradoNum(int numero)
{
    int res;
    res=  numero * numero;
    return res;
}

int main() {
    
   cout <<endl<< "Ingrese un número entero: ";
    int x = CuadradoNum(10);//llama funcion
    x= x*2 + (x/3);
    cout <<endl<< "El cuadrado de  " << x;

    cout <<endl<< "El cuadrado de 12 es  " << CuadradoNum(12);
    cout <<endl<< "El cuadrado de 15 es  " << CuadradoNum(15);
    cout <<endl<< "El cuadrado de 9 es  " << CuadradoNum(9);
    int p;
    cout<<endl<<"Ingresa un entero para calcular su cuadrado  " ;
    cin>>p;
    cout<<endl<<"El cuadrado de " << x << " es " << CuadradoNum(p);
    

    x= CuadradoNum(CuadradoNum(3));
    cout<<endl<<"Resultado de un cuadrado de un cuadrado  " <<x;



    return 0;
}
