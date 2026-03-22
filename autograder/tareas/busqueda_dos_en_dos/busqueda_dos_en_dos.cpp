#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int busqueda_dos_en_dos(const vector<int>& lista, int n, int objetivo) {
    int i = 0;
    while (i < n && lista[i] < objetivo) {
        i += 2;
    }

    i = i - 1;

    for (int j = max(0, i); j <= min(i + 1, n - 1); j++) {
        if (lista[j] == objetivo) {
            return j;
        }
    }

    return -1;
}

int main() {
    // leer lista
    int n;
    std::cin >> n;

    std::vector<int> lista(n);
    for (int i = 0; i < n; i++) {
        std::cin >> lista[i];
    }

    // leer el objetivo
    int objetivo;
    std::cin >> objetivo;

    // buscar e imprimir el resultado
    int resultado = busqueda_dos_en_dos(lista, n, objetivo);
    std::cout << resultado << std::endl;

    return 0;
}
