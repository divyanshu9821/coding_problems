#include <iostream>
using namespace std;

// print function for array
void print_array(int arr[], int arr_length)
{
    for (int i = 0; i < arr_length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}

// In selection sort minimum element is swap at the first place in unsorted part of the arr

void selection_sort(int arr[], int arr_length)
{
     for (int i = 0; i < arr_length-1; i++)
    {
        for (int j = i + 1; j < arr_length; j++)
        {
            if (arr[i] > arr[j])
            {
                // swap element
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // print the array
    print_array(arr, arr_length);
    return;
}

// In bubble sort repeatedly swap 2 adjacent elements if they are in wrong order

void bubble_sort(int arr[], int arr_length)
{
    int counter = 1;
    while(counter<arr_length)
    {
        for(int i = 0;i<arr_length-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }

    // print the array
    print_array(arr,arr_length);
    return;
}

// In Insertion sort first element from the unsorted part of array is place at the correct position in the sorted part array
// intially first element of array is considered as sort array part and next element to it is the first element of the unsorted array part
void insertion_sort(int arr[], int arr_length)
{
    for (int j = 1; j < arr_length; j++)
    {
        for (int i = j; i > 0; i--)
        {
            if (arr[i] < arr[i - 1])
            {
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
        }
    }

    // print the array
    print_array(arr, arr_length);
    return;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int arr_length = sizeof(arr) / sizeof(arr[0]);
    // selection_sort(arr, arr_length);
    // bubble_sort(arr, arr_length);
    insertion_sort(arr, arr_length);
    return 0;
}