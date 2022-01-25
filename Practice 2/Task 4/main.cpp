#include <iostream>
#include <vector>

std::vector <int> a;
std::vector <int> vector_sizes;
std::vector <float> vector_sizes_relations;

int main() {
    vector_sizes.push_back(0);
    for (int i = 0; i < 1000000; ++i){
        if(vector_sizes.back() < a.capacity()) vector_sizes.push_back(a.capacity());
        a.push_back(i);
    }
    for(int vector_size : vector_sizes){
        std::cout << vector_size << " ";
    }
    for(int i = 0; i < vector_sizes.size() - 1; ++i){
        vector_sizes_relations.push_back((float) vector_sizes[i + 1] / (float) vector_sizes[i]);
    }
    std::cout << std::endl;
    for(int i = 0; i < vector_sizes_relations.size(); ++i){
        std::cout << vector_sizes_relations[i] << " ";
    }
    return 0;
}
