#include "includes/helper.hpp"

template<typename T>
T* InsertionSort(T* arr, int n)
{
   for (int i = 1; i < n; i++)
   {
       for (int j = i; j > 0; j--)
       {
           if (arr[j] < arr[j-1])
           {
               arr = Swap(arr, j, j-1);
           }
           PrintArray(arr, 10);
       }
   }
   return arr;
}

int main()
{
    int testArray [10] = {-10, -502, 1, 90, 34, 76, 12, 2, 1000, 0};
    PrintArray(testArray, 10);
    PrintArray(InsertionSort(testArray, 10), 10);
}
