#include <iostream>
#include <vector>
using namespace std;

void fill(vector<int> &v)
{
    for (int i=0; i<v.size(); i++)
    {
        v[i] = i;
    }
}

int search_max(const vector<int> &v)
{
    int max = 0;

    for (int i : v) {
        if(i > max) max = i;
    }

    return max;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    fill(a);
    cout << "Maximum: " << search_max(a);
    return 0;
}