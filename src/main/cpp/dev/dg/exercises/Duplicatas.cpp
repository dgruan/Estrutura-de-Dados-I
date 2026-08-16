#include <iostream>
#include <vector>

using namespace std;

int main() {
    short tam;
    int k = 1;

    cout << "Digite o tamanho do seu vetor: ";
    cin >> tam;

    vector<int> nums(tam);

    for (int i = 0; i < tam; i++) {
        cout << "Digite um numero para inserir na posicao " << i << " do seu vetor: ";
        cin >> nums[i];
    }

    for (int i = 1; i < tam; i++) {
        if (nums[i] != nums[i - 1]) {
            k++;
        }
    }

    cout << k << endl;

    cout << nums[0] << " ";

    for (int i = 1; i < tam; i++) {
        if (nums[i] != nums[i - 1]) {
            cout << nums[i] << " ";
        }
    }

    return 0;
}
