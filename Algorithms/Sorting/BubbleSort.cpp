#include "includes/helper.hpp"

template<typename T>
// Bubble Sort (slowly bubbles the largest element every iteration)
T* BubbleSort(T* arr, int n)
{
    // For every element in the array
    for (int i = 0; i < n - 1; i++)
    {
        // If the element is smaller than the one next to it -> swap
        // Keep swaping until the end
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                arr = Swap(arr, j, j+1);
            }
        }
    }
    return arr;
}

int main()
{
    int testArray [10] = {-10, -502, 1, 90, 34, 76, 12, 2, 1000, 0};
    PrintArray(testArray, 10);
    PrintArray(BubbleSort(testArray, 10), 10);
}
