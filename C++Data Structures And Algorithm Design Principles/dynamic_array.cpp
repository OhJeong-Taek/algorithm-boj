#include <string>
#include <algorithm>
#include <iostream>

template <typename T>
class dynamic_array{
    T* data;
    size_t n;

    public:
    dynamic_array(int n){
        this->n = n;
        data = new T[n];
    }

    dynamic_array(const dynamic_array<T>& other){
        n = other.n;
        data = new T[n];

        for (int i=0; i<n; i++)
            data[i] = other[i];
    }
}