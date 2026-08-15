#include <iostream>

int main() {

    int x, total = 0;

    std::cin >> x;

    for (int i = 1; i <= x; i++) {
        total += i + 2;
    }

    std::cout << total;

    return 0;
}
