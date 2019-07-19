#include "includes/helper.hpp"

template<typename T>
// Insertion Sort (Inserting elements into the correct position)
T* InsertionSort(T* arr, int n)
{
    // For every element in the array
   for (int i = 1; i < n; i++)
   {
       // If it is less than the element before it, swap
       // Continue until the element is at the beginning or have stopped swaping 
       for (int j = i; j > 0; j--)
       {
           if (arr[j] < arr[j-1])
           {
               arr = Swap(arr, j, j-1);
           }
           else
           {
               break;
           }
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
