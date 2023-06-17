#include <iostream>
#include <climits>
using namespace std;

// array printing
void print_array(bool arr[], int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// find the first repeating element in the array of integers

void rep_element(int arr[], int arr_len)
{
    int max = arr[0];

    // this loop is to get the maximum element in the array
    for (int i = 0; i < arr_len; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    // intialize the array with -1 of size max+1 because max element get out of index if length of array is max
    int idx_arr_len = max + 1;
    int idx_arr[idx_arr_len];
    for (int i = 0; i < idx_arr_len; i++)
        idx_arr[i] = -1;

    int min_idx = INT_MAX;
    for (int i = 0; i < arr_len; i++)
    {
        if (idx_arr[arr[i]] != -1)
            min_idx = min(min_idx, idx_arr[arr[i]]);
        else
            idx_arr[arr[i]] = i;
    }

    if (min_idx == INT_MAX)
        cout << "No Repeatition -1" << endl;
    else
        cout << arr[min_idx] << endl;
}

// find the subarray whose sum is equal to S

void subarray_sum(int arr[], int arr_len, int s)
{
    // brute force
    // int arr_sum = 0;
    // for (int i = 0; i < arr_len; i++)
    // {
    //     arr_sum = 0;
    //     for (int j = i; j < arr_len; j++)
    //     {
    //         arr_sum += arr[j];
    //         if (arr_sum == s)
    //         {
    //             cout << i+1 << " " << j+1 << endl;
    //             return;
    //         }
    //     }
    // }

    // optimized
    int i = 0, j = 0, st = -1, en = -1, sum = 0;
    while (j < arr_len && sum + arr[j] <= s)
    {
        sum += arr[j];
        j++;
    }

    if (sum == s)
    {
        cout << i + 1 << " " << j << endl;
        return;
    }

    while (j < arr_len)
    {
        sum += arr[j];
        while (sum > s)
        {
            sum -= arr[i];
            i++;
        }

        if (sum == s)
        {
            cout << i + 1 << " " << j + 1 << endl;
            return;
        }

        j++;
    }
}

// missing smallest positive in array

void missing(int arr[], int arr_len)
{
    int max_ele = arr[0];
    for (int i = 0; i < arr_len; i++)
        max_ele = max(max_ele, arr[i]);

    bool check[max_ele + 1] = {0};
    for (int i = 0; i < arr_len; i++)
    {
        if(arr[i]>=0){
            check[arr[i]] = 1;
        }
    }

    for(int i = 0;i<max_ele+1;i++){
        if(check[i]==0){
            cout<<i<<endl;
            return;
        }
    }

    cout<<1<<endl;// incase all the elements are negative because i consider 1 is minimum positive number
    return;
}

int main()
{

    int arr[] = {-9,-1,3,-4,5};
    int arr_len = sizeof(arr) / sizeof(arr[0]);

    // rep_element(arr, arr_len);
    // subarray_sum(arr, arr_len, 12);
    missing(arr, arr_len);

    return 0;
}