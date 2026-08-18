#include <iostream>

int main() {
    int d, m;

    std::cout << "Dia: ";
    std::cin >> d;

    std::cout << "Mes: ";
    std::cin >> m;

    if (d > 12 || d == m) {
        std::cout << "DATA SEGURA";
    }
    else {
        std::cout << "DATA INCERTA";
    }

    return 0;
}
