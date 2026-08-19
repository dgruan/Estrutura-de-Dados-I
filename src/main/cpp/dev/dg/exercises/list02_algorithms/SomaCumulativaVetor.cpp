#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tam;
    int soma = 0;

    cin >> tam;

    vector <int> nums(tam);

    for (int i=0;i<tam;i++) {
        cin >>  nums[i];
    }

    for (int i=0;i<tam;i++) {
        soma += nums[i];
        cout << soma;

    }
}
