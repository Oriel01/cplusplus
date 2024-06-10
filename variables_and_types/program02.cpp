#include <iostream>
using namespace std;

int main(){
    /*
        El compilador de c++ también puede inferir el tipo de dato de una variable.
    */

    int foo = 12;
    auto bar = foo;
    cout << bar << endl;
    /*
        otra forma de hacerlo es utilizando decltype, para variables que no han sido inicializadas
    */

    int foo2 = 34;
    decltype(foo2) bar2;
    bar2 = 45;
    cout << bar2 << endl;

    /*
        Estas features fueron introducidas recientemente
    */

    return 0;
}