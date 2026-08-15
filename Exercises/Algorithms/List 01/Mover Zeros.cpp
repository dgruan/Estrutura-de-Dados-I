#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tam;

    cout << "Tamanho do vetor: ";
    cin >> tam;

    vector<int> nums(tam);

    for (int i = 0; i < tam; i++) {
        cin >> nums[i];
    }

    int k = 0;

    for (int i = 0; i < tam; i++) {
        if (nums[i] != 0) {
            nums[k] = nums[i];
            k++;
        }
    }

    for (int i = k; i < tam; i++) {
        nums[i] = 0;
    }

    for (int i = 0; i < tam; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
