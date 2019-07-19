#include "includes/helper.hpp"

template <typename T>
T* merge(T *arr, T *temp, int lstart, int rend)
{
    int middle = (lstart+rend)/2;

    int l = lstart;
    int r = middle + 1;
    int index = l;

    while (l <= middle && r <= rend)
    {
        if (arr[l] <= arr[r])
        {
            temp[index] = arr[l];
            l++;
        }
        else
        {
            temp[index] = arr[r];
            r++;
        }
        index++;
    }

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

    for (int i = lstart; i <= rend; i++)
    {
        arr[i] = temp[i];
    }
    return arr;
}

template <typename T>
T *MergeSort(T *arr, T *temp, int l, int r)
{
    if (l >= r)
        return arr;

    int m = (l+r)/2;
    arr = MergeSort(arr, temp, l, m);
    arr = MergeSort(arr, temp, m + 1, r);

    arr = merge(arr, temp, l, r);
    return arr;
}

template <typename T>
T* MergeSort(T *arr, int n)
{
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