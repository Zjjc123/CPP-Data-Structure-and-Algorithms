#include "includes/helper.hpp"

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

int main()
{
    int testArray [10] = {-10, -502, 1, 90, 34, 76, 12, 2, 0, 1000};
    PrintArray(testArray, 10);
    PrintArray(SelectionSort(testArray, 10), 10);
}
