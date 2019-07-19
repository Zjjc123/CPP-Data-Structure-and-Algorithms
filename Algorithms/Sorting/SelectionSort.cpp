#include "includes/helper.hpp"

template<typename T>
// Selection sort (select the smallest element and swap it to the front)
T* SelectionSort(T* arr, int n)
{
    // For every element except the last one
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        // If something else is smaller than it, remember the smallest's index
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap that element with the smallest
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
