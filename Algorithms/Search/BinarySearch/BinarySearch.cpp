#include <iostream>
#include <cmath>

template <typename T>
// Has to pass in the n or else its hard to get since arr is passed in as address of first element
int BinarySearch(T arr[], int n, T target)
{
    int L = 0;
    int R = n - 1;
    while (L <= R)
    {
        int index = floor((L + R)/2);
        if (arr[index] > target)
        {
            R = index - 1;
        }
        else if (arr[index] < target)
        {
            L = index + 1;
        }
        else
        {
            return index;
        }
    }
    return -1;
}

int main()
{
    int testArray [10] = {1, 5, 7, 12, 15, 16, 34, 65, 78, 91};

    std::cout << BinarySearch(testArray, 10, 15) << std::endl;
    std::cout << BinarySearch(testArray, 10, 12903) << std::endl;
    std::cout << BinarySearch(testArray, 10, 91) << std::endl;
    std::cout << BinarySearch(testArray, 10, 1) << std::endl;
    std::cout << BinarySearch(testArray, 10, 12) << std::endl;
}

