/*
This is an example of selection sort.
Both ascending and descending order.
*/

#include <iostream>

int main()
{
    int arr[] = {6, 1, 3, 9, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minEle = 0;
    for (int i = 0; i < size - 1; i++)
    {
        minEle = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minEle])
            {
                std ::swap(arr[j], arr[minEle]);
            }
        }
    }

    for (int i = 0; i < size; i++)
        std ::cout << arr[i] << " ";
    std ::cout << "\n";
    for (int i = 0; i < size - 1; i++)
    {
        minEle = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[minEle])
            {
                std ::swap(arr[j], arr[minEle]);
            }
        }
    }
    for (int i = 0; i < size; i++)
        std ::cout << arr[i] << " ";
}