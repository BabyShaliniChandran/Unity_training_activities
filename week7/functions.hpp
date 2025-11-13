#include<cstddef>
#ifndef DYNAMIC_ARRAY_HPP
#define DYNAMIC_ARRAY_HPP
class DynamicArray{
    private:
        int* data;
        std::size_t arr_size;
        std::size_t arr_capacity;
        void resize(std::size_t new_capacity);
public:
    DynamicArray();
    ~DynamicArray();
    void push_back(int value);
};

#endif