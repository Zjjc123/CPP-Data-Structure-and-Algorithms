#include "includes/helper.hpp"

template<typename T>
// See bubble sort (implemented recursively)
T* BubbleSort(T* arr, int n)
{
    if (n <= 1)
    {
        return arr;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            arr = Swap(arr, i, i+1);
        }
    }
    BubbleSort(arr, n - 1);

    return arr;
}

int main()
{
    int testArray [10] = {-10, -502, 1, 90, 34, 76, 12, 2, 1000, 0};
    PrintArray(testArray, 10);
    PrintArray(BubbleSort(testArray, 10), 10);
}
