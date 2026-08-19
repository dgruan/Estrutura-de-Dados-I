#include <iostream>
#include <vector>

using namespace std;

int main() {
    int dias, lucro = 0, aux = 0;

    cin >> dias;

    vector <int> prices(dias);

    for (int i=0;i<dias;i++) {
        cin >> prices[i];
    }

    for (int i = 0; i < dias; i++) {
        for (int j = i + 1; j < dias; j++) {
            if (prices[j] > prices[i]) {
                aux = prices[j] - prices[i];
                if (aux > lucro) {
                    lucro = aux;
                }
            }
        }
    }
    std::cout << lucro;
}
