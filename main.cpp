#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    /*cout << "Ingrese el 1er numero : " ;
    cin >> a;
    cout << "Ingrese el 2er numero : " ;
    cin >> b;

    cout << "La suma es : "<< a+b << endl;
    cout << "La multiplicacion es : "<< a*b << endl;
    cout << "La division es : "<< a/b<< endl;
*/
    cout << " Ingresa tu año de nacimineto :" << endl ;
    cin >> a;
    if (a<=2001)
        cout << "Eres mayor de edad " << endl;
    else
        cout << "Eres menor de edad " << endl ;

    return 0;
}
