#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    string palavra;
    cin >> palavra;

    for (int i = 0, j = n - 1; i < j; i++, j--) {
        char aux = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = aux;
    }

    cout << palavra << endl;

    return 0;
}
