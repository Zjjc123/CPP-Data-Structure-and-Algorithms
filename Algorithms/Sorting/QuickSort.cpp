#include "includes/helper.hpp"

template <typename T>
// Move everything smaller than pivot (highest index)
// to the left of the pivot and everything greater to the right
// Then swap pivot to the middle
int partition(T *arr, int l, int h)
{
    T pivot = arr[h];

    // Smallest index
    int i = l-1;

    // Traverse through array
    for (int j = l; j <= h - 1; j++)
    {
        // If array is smaller add one to smallest index and swap with that index
        if (arr[j] <= pivot)
        {
            i++;
            arr = Swap(arr, i, j);
        }
    }
    // Swap pivot to the middle
    arr = Swap(arr, i + 1, h);
    return i + 1;
}

template <typename T>
// Recursively choosing pivots and making everything on the left
// of pivot smaller than pivot and everything on right greater
T *QuickSort(T *arr, int l, int h)
{
    // If h is greater than l return
    if (h < l)
        return arr;
    int pivot = partition (arr, l, h);
    // Recursively quicksort both side of pivot
    {
        QuickSort(arr, l, pivot - 1);
        QuickSort(arr, pivot + 1, h);
    }
    return arr;
}


int main()
{
    const int n = 10;
    int testArray[n] = {-10, -502, 1, 90, 34, 76, 12, 2, 1000, 0};
    PrintArray(testArray, n);
    PrintArray(QuickSort(testArray, 0, n-1), n);
}