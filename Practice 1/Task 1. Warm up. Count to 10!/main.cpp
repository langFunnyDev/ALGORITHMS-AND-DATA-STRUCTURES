#include <Windows.h>
#include <iostream>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Числа от 0 до 10: " << std::endl;
    for (int i = 0; i <= 10; ++i) {
        std::cout << i << std::endl;
    }
    system("pause");
    return 0;
}
