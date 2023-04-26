// this file contain linear search and binary search

#include <iostream>
using namespace std;

/*
In this search algo we starting searching from the very first element in the array till the last element.
Linear search does not require sorting of array.
*/

void linear_search(int arr[], int arr_length, int key)
{
    for (int i = 0; i < arr_length; i++)
    {
        if (arr[i] == key)
        {
            cout << key << " is present at : " << i << " index";
            return;
        }
    }
    cout << "Key not present" << endl;
    return;
}

/*
In this search algo we check the mid element of the array and break the array into at each step and look the right or left part of array based upon the middle element is small or larger than key element.
Binary search require sorted array
*/

void binary_search(int arr[], int arr_length, int key)
{
    int start_index = 0;
    int end_index = arr_length - 1;
    while (start_index <= end_index)
    {
        int mid = (start_index + end_index) / 2; // checking middle element
        if (arr[mid] == key)
        { // if key is present at middle
            cout << key << " is present at : " << mid << " index";
            return;
        }
        else if (arr[mid] > key)
        { // if key is smaller than middle element than look for left half
            end_index = mid - 1;
        }
        else // otherwise look for rigth half
            start_index = mid + 1;
    }
    cout << "Key not present" << endl;
    return;
}

int main()
{

    // int arr[] = {12,34,2121,44,5,1,6,9,11,16};//unsorted array
    int arr[] = {1, 2, 3, 4, 5, 6, 7}; // sorted array
    int arr_length = sizeof(arr) / sizeof(arr[0]);
    // linear_search(arr,arr_length,1);
    binary_search(arr, arr_length, 4);

    return 0;
}