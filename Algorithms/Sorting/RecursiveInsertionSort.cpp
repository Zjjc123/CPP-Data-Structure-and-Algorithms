#include "includes/helper.hpp"

template <typename T>
T *InsertionSort(T *arr, int n)
{
    if (n <= 1)
    {
        return arr;
    }
    for (int j = n; j > 0; j--)
    {
        if (arr[j] < arr[j - 1])
        {
            arr = Swap(arr, j, j - 1);
        }
    }
    InsertionSort(arr, n - 1);
    return arr;
}

int main()
{
    int testArray[10] = {-10, -502, 1, 90, 34, 76, 12, 2, 1000, 0};
    PrintArray(testArray, 10);
    PrintArray(InsertionSort(testArray, 10), 10);
}
