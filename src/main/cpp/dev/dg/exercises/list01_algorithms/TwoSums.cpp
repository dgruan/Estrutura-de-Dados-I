#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tam;
    long target;

    cin >> tam;
    cin >> target;

    vector<int> nums(tam);

    for (int i = 0; i < tam; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < tam; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (nums[i] + nums[j] == target) {
                cout << i << " " << j;
            }
        }
    }

    return 0;
}
