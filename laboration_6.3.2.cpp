#include <iostream>

using namespace std;

bool Is_Elem_Vpor_Za_Nezrost(int array[], int n, int index = 0) {
    if (index == n - 1) {
        return true;
    }

    if (array[index] < array[index + 1]) {
        return false;
    }

    return Is_Elem_Vpor_Za_Nezrost(array, n, index + 1);
}

int main() {
    int array[] = { 5, 5, 4, 4, 3, 1 };
    int n = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    if (Is_Elem_Vpor_Za_Nezrost(array, n)) {
        cout << "Vporiadkovani za nezrostaniam " << endl;
    }
    else {
        cout << "Vporiadkovani ne za nezrostaniam " << endl;
    }

    return 0;
}
