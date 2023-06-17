#include <iostream>
using namespace std;

void print(int[], int);

// user defined function
void count_sort(int arr[], int n)
{
    int max_ele = arr[0]; // finding the maximum element in arr array as it is use to declare the size of count array
    for (int i = 0; i < n; i++)
    {
        max_ele = max(max_ele, arr[i]);
    }

    int count_arr[max_ele + 1] = {0}; // this array store the frequency of elements of array
    // its index shows the element of arr array and its element shows the number of times element occurs in arr array
    for (int i = 0; i < n; i++)
    {
        int index = arr[i];
        count_arr[index]++;
    }

    int val = 0;                   // to store cummulative sum at each iteration of loop
    int position_arr[max_ele + 1]; // this array store the correct position of elements(its index is the element in the array), resultant will be sorted array
    for (int i = 0; i <= max_ele; i++)
    {
        val += count_arr[i];
        position_arr[i] = val;
    }

    int temp_arr[n]; // this stores the correct order of elements of arr array
    for (int i = n - 1; i >= 0; i--)
    {                                    // iteration start from last element of arr array
        int index = arr[i];              // the element of arr array is the index for position_array
        int pos = --position_arr[index]; // pos is the actual position for the element
        temp_arr[pos] = index;           // putting the element in temp array
    }

    // copying the elements from temp array to arr array
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp_arr[i];
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    count_sort(arr, n);

    print(arr, n);
    return 0;
}