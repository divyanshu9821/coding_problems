#include <iostream>
using namespace std;

//print the array
void print_arr(int arr[], int arr_length){
    for(int i = 0;i<arr_length;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;
}

// chocolate question
// you have 15 ruppees and 1 chocolate cost 1 ruppees and you get 1 wrapper from a chocolate and you can get 1 chocolate from 3 wrappers so how many chocolate you can get?
void chocolates(int ruppees)
{

    // int chocolate = ruppees;
    // int wrappers = chocolate;
    // while (wrappers > 0)
    // {
    //     int choco_from_wrappers = wrappers / 3;
    //     if (choco_from_wrappers == 0)
    //         break;
    //     wrappers = choco_from_wrappers + wrappers % 3;
    //     chocolate += choco_from_wrappers;
    // }
    // cout << chocolate;
    // return 0;

    // another way
    int chocolate = ruppees;
    int wrapper = chocolate;
    while (wrapper > 0)
    {
        chocolate += wrapper / 3;
        wrapper /= 3;
    }

    cout << chocolate + 1;
}

// get the maximum element from the array
void max_element(int arr[], int arr_length)
{
    int max = arr[0];
    for (int i = 0; i < arr_length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;
}

//  sum of all sub arrays
void sum_subarrays(int arr[], int arr_length)
{
    for (int i = 0; i < arr_length; i++)
    {
        int sum = 0;
        for (int j = i; j < arr_length; j++)
        {
            sum += arr[j];
            cout << sum << endl;
        }
    }
}

// longest arithmetic subarray
// an arithmetic array is an array in which there at least two integers and difference between consequtive integers are equal
void long_arith_subarray(int arr[], int arr_length)
{
    int diff_arr[arr_length - 1] = {0};

    for (int i = 0; i < arr_length - 1; i++)
    {
        diff_arr[i] = arr[i + 1] - arr[i];
    }

    int first_element = diff_arr[0];
    int max_count = 0;
    int count = 0;
    for (int i = 0; i < arr_length - 1; i++)
    {
        if (diff_arr[i] == first_element)
        {
            count++;
        }
        else
        {
            count = 1;
            first_element = diff_arr[i];
        }
        if (count > max_count)
        {
            max_count = count;
        }
    }
    cout << max_count + 1 << endl;
}

// no of record breaking days
// condition: at ith day visitors are greater than next day.
// condition: at the ith day visitors are greater than each of the previous days.
// note:first day should not be the record breaking day
void record_days(int arr[], int arr_length)
{
    int record_breking_days = 0;
    int max = arr[0];
    for (int i = 0; i < arr_length - 1; i++)
    {
        if (arr[i] > arr[i + 1] && arr[i] > max)
        {
            record_breking_days++;
            max = arr[i];
        }
    }
    if (arr[arr_length - 1] > max)
    {
        record_breking_days++;
    }
    cout << record_breking_days << endl;
}



int main()
{
    // chocolates(15);

    int arr[] = {1, 2, 0, 7, 2, 0, 2, 2};
    int arr_length = sizeof(arr) / sizeof(arr[0]);

    // max_element(arr, arr_length);
    // sum_subarrays(arr,arr_length);
    // long_arith_subarray(arr, arr_length);
    // record_days(arr, arr_length);
}