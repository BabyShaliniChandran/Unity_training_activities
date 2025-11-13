#include "functions.hpp"
#include<iostream>
#include<cstddef>

DynamicArray::DynamicArray(){
    arr_capacity=4;
    arr_size=0;
    data=new int[arr_capacity];
}

DynamicArray::~DynamicArray(){
    delete[] data;
}


void DynamicArray::resize(std::size_t new_capacity){
    int* newData=new int[new_capacity];
    for (std::size_t i = 0; i < arr_size; ++i){
        newData[i] = data[i];
    }
    delete[] data;
    data=newData;
    arr_capacity=new_capacity;

}

void DynamicArray::push_back(int value){
        if (arr_size ==arr_capacity){
        resize(arr_capacity*2);
    }
    data[arr_size]=value;
    arr_size++;
}