#include <iostream>
using namespace std;

// this function is to print the array from st index to en index
// worst case complexity is linear
void print_arr(int arr[], int st, int en)
{
    for (int i = st; i <= en; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}

// this function print the all sub arrays
// worst case complexity is cubic
void print_subarr(int arr[], int arr_len)
{
    for (int i = 0; i < arr_len; i++)
    {
        for (int j = i; j < arr_len; j++)
        {
            print_arr(arr, i, j);
        }
    }
    return;
}

// this function print the maximum sum among the all posible subarray
int sub_sums(int arr[], int arr_len)
{
    int sum = 0;
    int max_sum = 0;

    // worst case complexity is quadratic
    // for (int i = 0; i < arr_len; i++)
    // {
    //     sum = 0;
    //     for (int j = i; j < arr_len; j++)
    //     {
    //         sum += arr[j];
    //         max_sum = max(sum, max_sum);
    //     }
    // }


    // worst case complexity is linear
    // called kidane's algo
    for (int i = 0; i < arr_len; i++)
    {
        sum += arr[i];

        if (sum<0)
            sum = 0;

        max_sum = max(max_sum, sum);
    }

    return max_sum;
}

// this function print the maximum circular sub array sum
void max_cir_sub_sum(int arr[], int arr_len)
{
    int sum = 0;
    int max_sum = 0;
    // worst case complexity quadratic
    // for (int i = 0; i < arr_len; i++)
    // {
    //     sum = 0;
    //     for (int j = i; j < arr_len; j++)
    //     {
    //         sum+=arr[j];
    //         max_sum = max(sum,max_sum);
    //     }

    //     for (int j = 0; j < i; j++)
    //     {
    //         sum+=arr[j];
    //         max_sum = max(max_sum,sum);
    //     }        
    // }

    // worst case is linear
    int wrap_sum = 0; // means subarray is in between or participating elements in between non participationg elements
    // like in [-1,4,-6,7,5,-4]
    int non_wrap_sum = 0;// means non participating elements is between participating elements
    // like in [4,-4,6,-6,10,-11,12]
    
    wrap_sum = sub_sums(arr,arr_len);// simple kidane algorithm on array will do

    //for non wrap first we reverse the sign of all elements in array
    //then apply kidane algo to get the max sub array sum
    //then subtract it from total sum of array
    int arr_sum = 0;
    for (int i = 0; i < arr_len; i++)
    {
        arr_sum+=arr[i];
        arr[i] = -arr[i];
    }

    // now our arr is modified as all element sign is reversed
    non_wrap_sum = arr_sum + sub_sums(arr, arr_len) ;//  = total sum of arr - maximum sub arr sum
    // remind the sign is reveresed in original array of non praticipating elements

    cout<<max(wrap_sum,non_wrap_sum)<<endl;
    
    return;
}

// pair sum problem in this find the two elements in array whose sum is equal to some number
void pair_sum_problem(int arr[], int arr_len, int k)
{  
    //worst case complexity is quadratic
    for(int i = 0;i<arr_len-1;i++){
        for(int j = i+1;j<arr_len;j++){
            if(arr[i]+arr[j]==k)
            {
                cout<<"Elements "<<arr[i]<<","<<arr[j]<<" @index "<<i<<","<<j<<" has sum "<<k<<endl;
                return;
            }
        }
    }

    // worst case complexity is linear if arr provide is sorted
    // int st = 0, en = arr_len-1;
    // while(st<en){
    //     int ele_sum = arr[st]+arr[en];
    //     if(k<ele_sum)
    //         en--;

    //     if(k>ele_sum)
    //         st++;

    //     if(k==ele_sum)
    //     {
    //         cout<<"Elements "<<arr[st]<<","<<arr[en]<<" @index "<<st<<","<<en<<" has sum "<<k<<endl;
    //         return;
    //     }    
    // }
    // cout<<"Elements not present"<<endl;
    return;
}



int main()
{
    int arr[] = {2,4,7,11,14,16,20,21};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    // print_subarr(arr, arr_len);
    // cout<< sub_sums(arr, arr_len)<< endl;
    // max_cir_sub_sum(arr, arr_len);
    // pair_sum_problem(arr,arr_len,31);// arr must be sorted for linear complexity

    return 0;
}