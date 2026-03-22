#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int contar_vocales(string texto) {
    int conteo = 0;

    for (char c : texto) {
        char m = tolower(c);
        if (m=='a'||m=='e'||m=='i'||m=='o'||m=='u') {
            conteo++;
        }
    }

    return conteo;
}

int main() {
    string linea;
    getline(cin, linea);

    int resultado = contar_vocales(linea);

    std::cout << resultado;

    return 0;
}




