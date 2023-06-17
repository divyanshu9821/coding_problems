#include<iostream>
using namespace std;

// simple two element swap function
void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int st, int en){

    int pivot = arr[en]; // taking last element as pivot
    int i = st - 1; //  initially pointing nowhere, it contains the pointer one place before the location where pivot element will be placed
    for(int j = st;j<en;j++){ // loop from starting element to the element previous to pivot element or last element
        if(arr[j]<pivot){

            i++;
            swap(arr,i,j);
        }

    }
    
    swap(arr,i+1,en);
    return i+1;    

}

// sort function divide the arr in two halfs every time, complexity O(log n)
void sort(int arr[], int st, int en){
    if(st>=en){
        return;
    }

    int pivot = partition(arr, st, en); // selecting the pivot arround which our arr is rotating
    // not including the index of pivot in below expressions
    sort(arr,st,pivot-1);// first half except pivot
    sort(arr,pivot+1,en);// second half except pivot
}

int main()
{

    int arr[] = {5,1,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}