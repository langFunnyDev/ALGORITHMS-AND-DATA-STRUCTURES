#include <iostream>
#include <vector>
#include <fstream>

std::ofstream file ("output.txt");

void fill_true(std::vector <bool> &v, int &n){
    for(int i = 2; i < n; ++i){
        v[i] = true;
    }
}

void SieveOfEratosthenes(std::vector <bool> &v, int &n){
    for(int i = 2; (i * i) <= n; ++i){
        if(v[i]){
            for(int j = (i * i); j <= n; j += i){
                v[j] = false;
            }
        }
    }
}

void PrintToConsole(std::vector <bool> &v, int &n){
    for(int i = 2; i <= n; ++i){
        if(v[i]) std::cout << i << " ";
    }
}

void PrintToFile(std::vector <bool> &v, int &n){
    for(int i = 2; i <= n; ++i){
        if(v[i]) file << i << " ";
    }
}

int main() {
    int n;

    std::cin >> n;
    std::vector <bool> prime_numbers (n+1);

    fill_true(prime_numbers, n);
    SieveOfEratosthenes(prime_numbers, n);

    PrintToConsole(prime_numbers, n);
    PrintToFile(prime_numbers, n);

    file.close();
    system("pause");

    return 0;
}
