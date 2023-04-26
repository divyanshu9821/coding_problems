#include <iostream>
using namespace std;

// write a program to check if a number is power of two or not
void check_power_2(int n)
{
    if (((n-1) & n) == 0)
        cout << n << " is power of 2" << endl;
    else
        cout << n << " is not power of 2" << endl;
    return;
}

// write a program to count the number of 1's in binary representation of a number
void count_1s(int n){
    int count = 0;
    while(n!=0){
        n = n&n-1;
        count++;
    }
    cout<<count<<endl;
    return;
}

// write a unique number in an array where all numbers except one, are present twice
int unique_num(int arr[], int n){
    int xor_sum = 0;
    for(int i = 0;i<n;i++){
        xor_sum = xor_sum^arr[i];
    }
    return xor_sum;
}

int main()
{

    // check_power_2(1024);
    // count_1s(7);
    int arr[] = {2,4,6,7,4,5,6,2};
    int arrLen = sizeof(arr)/sizeof(arr[0]);
    cout<<unique_num(arr,arrLen)<<endl;
    return 0;
}