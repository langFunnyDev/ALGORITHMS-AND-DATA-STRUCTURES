#include <iostream>

int main() {
    int n;

    std::cout << "Enter a number - the size of the array: ";
    std::cin >> n;

    int *a = new int[n];

    for (int i = 0, j = 0; i < n; ++i, j += 2 ) {
        a[i] = j;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << a[i];
    }
    std::cout << std::endl;

    system("pause");
    return 0;
}
