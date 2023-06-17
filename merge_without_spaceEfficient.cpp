// optimized solution of merge_without_space.cpp
#include<iostream>
using namespace std;

// gives the ceiling value
int next_gap(int gap){
    if(gap<2) return 0;
    return (gap/2) + (gap%2);
}

void merge(int arr1[], int arr2[], int n, int m){
    int gap = n+m;
    for (int g = next_gap(gap); g > 0; g = next_gap(g))
    {
        for(int i = 0;i<n+m;i++){
            int j = i+g;
            if(j>=(n+m)) break;

            if(i<n&&j<n){
                if(arr1[i]>arr1[j])
                    swap(arr1[i],arr1[j]);
            }
            else if(i<n&&j>=n){
                if(arr1[i]>arr2[j-n])
                    swap(arr1[i],arr2[j-n]);
            }
            else
                if(arr2[i-n]>arr2[j-m])
                    swap(arr2[i-n],arr2[j-m]);
        }
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