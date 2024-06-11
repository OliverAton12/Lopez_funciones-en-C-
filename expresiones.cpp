//FALTA AUTOR Y FECHA

#include <iostream>
using namespace std;

int main() {
    // a) valores iniciales: x=5, y=0; expresión: if (x==5 && y!=0)
    int x = 5, y = 0;
    if (x == 5 && y != 0) {
        cout << "a) La expresión es true" << endl;
    } else {
        cout << "a) La expresión es false" << endl;
    }

    // b) valores iniciales: n=90; expresión: if (!(n>=1 && n<=100))
    int n = 90;
    if (!(n >= 1 && n <= 100)) {
        cout << "b) La expresión es true" << endl;
    } else {
        cout << "b) La expresión es false" << endl;
    }

    // c) valores iniciales: num=10; expresión: resultado = (3.14159 * num - (num*2)/3)
    int num = 10;
    double resultado = (3.14159 * num - (num * 2) / 3);
    cout << "c) El valor de resultado es " << resultado << endl;

    // d) valores iniciales: p=15, q=20; expresión: if (p=15 || q>20)
    int p = 15, q = 20;
    if (p = 15 || q > 20) {
        cout << "d) La expresión es true" << endl;
    } else {
        cout << "d) La expresión es false" << endl;
    }

    // e) valores iniciales: p=2, q=1; expresión: if (p!=2 || q==5)
    p = 2, q = 1;
    if (p != 2 || q == 5) {
        cout << "e) La expresión es true" << endl;
    } else {
        cout << "e) La expresión es false" << endl;
    }

    return 0;
}
