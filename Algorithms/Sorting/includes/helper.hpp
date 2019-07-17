#include <iostream>

template<typename T>
T* Swap(T* arr, int i, int j)
{
    T temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return arr;
}


template<typename T>
void PrintArray(T* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i];
        std::cout << ", ";
    }
    std::cout << "" << std::endl;
}
