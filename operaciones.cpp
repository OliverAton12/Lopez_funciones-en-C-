#include <iostream>
using namespace std;

double suma(double num1, double num2)
{
    return num1 + num2;
}
double resta(double num1, double num2)
{
    return num1 - num2;
}
double producto(double num1, double num2)
{
    return num1 * num2;
}
double division(double num1, double num2)
{
    return num1 / num2;
}


int main()
{

    cout<<endl<<"Funciones que calculan las operaciones aritmiticas basicas" ;
    cout<<endl<<"19 dividido para 3 es "<<division(19,3);

    double res= suma(10, suma(12,100));
    cout<<endl<<"la variable res vale "<<res;
    return 0;
}