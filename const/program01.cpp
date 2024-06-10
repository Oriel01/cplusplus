#include <iostream>
#include <string>

using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int main(){
    const double radio = 5.0;
    double circle;

    circle = 2 * PI * radio;

    cout << circle << NEWLINE;
    cout << "ending the program" << endl;

    return 0;
}