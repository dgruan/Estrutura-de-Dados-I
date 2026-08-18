#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tam;

    cout << "Tamanho do vetor: ";
    cin >> tam;

    vector<int> nums(tam);
    int indice;

    for (int i = 0; i < tam; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < tam; i++) {
        int k = 0;

        for (int j = 0; j < tam; j++) {
            if (nums[j] == nums[i]) {
                k++;
            }
        }

        if (k > (tam / 2)) {
            indice = nums[i];
            break;
        }
    }

    cout << indice;

    return 0;
}
