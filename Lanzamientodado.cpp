#include <iostream>
#include <cstdlib> //Para srand () y rand ()
#include <ctime> //Para time()

using namespace std;
int main ()  {
    int resultado;
    srand(static_cast<unsigned int>(time(0))) ; //inicializa la semilla para numeros aleatorios
    resultado = rand() % 6 + 1; //Genera un numero entre 1 y 6
    if (resultado == 1) {
        cout << "El resultado del dado es: 1. *" <<endl;

    }else if (resultado ==2) {
        cout << "El resultado del dado es: 2. --" <<endl;

    }else if (resultado == 3) {
        cout <<"El resultado del dado es: 3. +++" <<endl;

    }else if (resultado ==4){
        cout <<"El resultado del dado es: 4. @@@@  " <<endl;
    }else if (resultado ==5){
        cout <<"El resultado del dado es: 5.| | | | |   " <<endl;

    }else if (resultado ==6){
        cout <<"El resultado del dado es: 6. :-) :-) :-) :-) :-) :-)" <endl;

    }
    return 0;
}