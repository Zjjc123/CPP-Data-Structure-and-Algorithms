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
T* SelectionSort(T* arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        arr = Swap(arr, i, minIndex);
    }
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

int main()
{
    int testArray [10] = {-10, -502, 1, 90, 34, 76, 12, 2, 0, 1000};
    PrintArray(testArray, 10);
    PrintArray(SelectionSort(testArray, 10), 10);
}
