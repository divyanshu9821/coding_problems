// merge two arrays with the increasing order of element without extra space
// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1
#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void merge(int arr1[], int arr2[], int n, int m)
{
    int i = m-1;//4
    int j = n-1;//3
    while(i>=0){
        if(arr2[i]<arr1[j]){
            swap(arr2[i],arr1[j]);
            int k = j;
            while((arr1[k]<arr1[k-1])&&k>0){
                swap(arr1[k],arr1[k-1]);
                k--;
            }
        }
        i--;
    }
}

int main()
{

    int arr1[] = {1,3,5,7};
    int arr2[] = {0,2,6,8,9};

    int n, m;
    n = sizeof(arr1)/sizeof(arr1[0]);
    m = sizeof(arr2)/sizeof(arr2[0]);

    merge(arr1, arr2, n, m);

    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<" ";
    }

    for (int i = 0; i < m; i++)
    {
        cout<<arr2[i]<<" ";
    }

    cout<<endl;

    return 0;
}