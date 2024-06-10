#include <iostream>
using namespace std;

int main(){
    //Declarando variables
    int a;
    int b;
    int result;

    //Asignado datos a las variables
    a = 12;
    b = 23;
    //Inicializando Variables por constructor
    int x(24);
    //Inicializando Variables mediante Inicialización Uniforme
    int z{45};

    //Realizando operaciones
    result = a + b;
    int result2(x + z);

    //Imprimiendo resultado
    cout << "The result is -> " << result << endl;
    cout << "The result of the second operation is -> " << result2 << endl;

    return 0;
}