#pragma once

#include <iostream>

template < typename T, typename Func>
    void iter(T arr, size_t size, Func func){
        for(size_t i = 0; i < size; i++){
            func(arr[i]);
        }
    }

template <typename T>
    void printToScreen(T element){
        std::cout << element << " " ;
    }

/*
dizenin her ogesinde cagiralacak bir islev (func)
a loop iterates over each element of the array and calls the provided function func on each element
*/