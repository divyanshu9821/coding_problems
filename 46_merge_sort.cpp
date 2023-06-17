#include <iostream>
using namespace std;

void merge(int arr[], int st_pt, int mid_pt, int en_pt){
    
    int temp_arr[en_pt-st_pt+1];
    int temp_arr_index = 0;

    int i = st_pt;
    int j = mid_pt+1;

    while(i<=mid_pt&&j<=en_pt){
        if(arr[i]<arr[j]){
            temp_arr[temp_arr_index] = arr[i];
            temp_arr_index++;
            i++;
        }
        else{
            temp_arr[temp_arr_index] = arr[j];
            temp_arr_index++;
            j++;
        }
    }

    while(i<=mid_pt){
        temp_arr[temp_arr_index] = arr[i];
        temp_arr_index++;
        i++;
    }

    while(j<=en_pt){
        temp_arr[temp_arr_index]=arr[j];
        temp_arr_index++;
        j++;
    }

    i = st_pt;
    j = 0;
    while(i<=en_pt){
        arr[i] = temp_arr[j];
        i++;
        j++;
    }

    return;
}


void sort(int arr[], int st, int en)
{
    if (st == en)
    {
        return;
    }

    int mid = st+(en-st)/2;
    sort(arr, st, mid);
    sort(arr,mid+1,en);

    merge(arr,st,mid,en);
}

int main()
{

    int arr[] = {1,3,5,8,9,2,6,7,9,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}