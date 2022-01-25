#include <iostream>
#include <vector>

std::vector<int> simple_numbers;

int count_sieve(int n){
    int count = 0;
    int *a = new int[n + 1];

    for (int i = 0; i < n + 1; i++)
        a[i] = i;
    for (int p = 2; p < n + 1; p++)
    {
        if (a[p] != 0)
        {
            count += 1;
            simple_numbers.push_back(a[p]);
            for (int j = p*p; j < n + 1; j += p) a[j] = 0;
        }
    }
    return count;
}

int main() {
    int n = 0;
    int N;

    do {
        simple_numbers.clear();
        n++;
    } while (count_sieve(n) != 1000);

    std::cin >> N;
    std::vector <int> out (N);
    for (int i = 0; i < N; ++i) {
        std::cin >> out[i];
    }
    for (int i = 0; i < N; ++i) {
        std::cout << simple_numbers[out[i] - 1] << " ";
    }

    return 0;
}