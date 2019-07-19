#include "includes/helper.hpp"

template <typename T>
// Merging two sorted subarrays
T* merge(T *arr, T *temp, int lstart, int rend)
{
    int middle = (lstart+rend)/2;
    
    // Set the left index to the left most index
    // Set the starting right index to the middle index + 1;
    // Set index to left most index;
    int l = lstart;
    int r = middle + 1;
    int index = l;

    // While left and right both still have elements left
    while (l <= middle && r <= rend)
    {
        // If the element in the left array is smaller
        // Set the temp at index to that element
        if (arr[l] <= arr[r])
        {
            temp[index] = arr[l];
            l++;
        }
        // If the element in the right array is smaller
        // Set the temp at index to that element
        else
        {
            temp[index] = arr[r];
            r++;
        }
        index++;
    }

    // After one side is finished
    // Fill in the rest of the array with the other (is still correct order)
    while (l <= middle)
    {
        temp[index] = arr[l];
        l++;
        index++;
    }

    while (r <= rend)
    {
        temp[index] = arr[r];
        r++;
        index++;
    }

    // Copy sorted part of array from temp
    for (int i = lstart; i <= rend; i++)
    {
        arr[i] = temp[i];
    }
    return arr;
}

template <typename T>
T *MergeSort(T *arr, T *temp, int l, int r)
{
    // If left is equal or greater to right
    // That means the element is at its smallest
    // Return and do nothing
    if (l >= r)
        return arr;

    int m = (l+r)/2;
    // Recursively sort the two halves (left -> middle) & (middle + 1 -> right)
    arr = MergeSort(arr, temp, l, m);
    arr = MergeSort(arr, temp, m + 1, r);

    // Merge the two sorted halves together
    arr = merge(arr, temp, l, r);
    return arr;
}

template <typename T>
// Merge Sort (Splitting the array up into subarrays and combining the subarrays in the correct order)
T* MergeSort(T *arr, int n)
{
    // Create a helper array (pass in to be use everytime to save space)
    T *temp = new T;
    arr = MergeSort(arr, temp, 0, n-1);
    return arr;
}


int main()
{
    const int n = 10;
    int testArray[n] = {-10, -502, 1, 90, 34, 76, 12, 2, 1000, 0};
    PrintArray(testArray, n);
    PrintArray(MergeSort(testArray, n), n);
}