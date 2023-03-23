#include <iostream>
using namespace std;

// check the array is sorted or not with the help of recursion
bool check_sorted(int arr[], int arr_len)
{
    if (arr_len == 1)
    { // if arr has one element it means it is already sorted
        return true;
    }

    bool restArr = check_sorted(arr + 1, arr_len - 1); // checking sort again by shifting pointer in arr by 1 and if pointer shift by 1 so length of arr decrease by 1
    return arr[1] >= arr[0] && restArr;                // check if the first element is smaller than second element and rest of the array is sorted
}

// print the number in decreasing order till n
void dec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    return dec(n - 1);
}

// print the number in increasing order till n
void inc(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }

    inc(n - 1);
    cout << n << " ";
    return;
}

// first occurence of a number in array
int first_occur(int arr[], int arr_len, int i, int key) // 'i' index of the 'key'
{
    if (i >= arr_len)
        return -1;
    else if (arr[i] == key)
        return i;
    first_occur(arr, arr_len, i + 1, key);
}

// last occurence of a number in array
int last_occur(int arr[], int arr_len, int i, int key)
{
    if (i >= arr_len)
        return -1;

    int restArr = last_occur(arr, arr_len, i + 1, key);
    if (restArr != -1)
    {
        return restArr;
    }
    if (arr[i] == key)
        return i;

    return -1;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 0, 5, 7, 9, 11, 4};
    int arr_len = sizeof(arr) / sizeof(arr[0]);

    // cout << check_sorted(arr, arr_len);

    // dec(5);

    // inc(5);

    // cout << first_occur(arr, arr_len, 0, 4);

    cout << last_occur(arr, arr_len, 0, 4);

    return 0;
}