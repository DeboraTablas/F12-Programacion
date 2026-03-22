#include <iostream>

using namespace std;

//declaracion de variables 

int suma_digitos(int n) {
    int suma=0;
    while (n > 0) {
        suma += n % 10; //ultimo digito
         n = n / 10;
    
    }
    return suma;
}

int main() {
    //leer digitos 
    int n;
    std::cin >> n;

 //buscar e imprimir el resultado 
    int resultado = suma_digitos(n);
    std::cout << resultado << std::endl;

    return 0;
}
