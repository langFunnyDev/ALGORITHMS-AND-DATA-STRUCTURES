#include <iostream>
#include <vector>
using namespace std;

//Заполнение массива
void fill(vector <int> &v, int count)
{
    int number;
    for (int i = 0; i < count; ++i) {
        cin >> number;
        v[number] += 1;
    }
}

void print(vector <int> &v, int count){
    for(int i = 0; i < count; ++i){
        if(v[i] != 0) cout << i << ": " << v[i] << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    vector <int> a(n);
    fill(a, n);
    print(a, n);

    system("pause");
    return 0;
}