#include <cmath> y sqrt(n)
#include <iostream>

using namespace std;

int es_primo(int n) {
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;

    if (es_primo(n))
        std::cout << "primo";
    else
        std::cout << "no primo";

    return 0;
}