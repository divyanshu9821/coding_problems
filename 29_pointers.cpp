#include<iostream>
using namespace std;

// call by reference
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

// not possible to return two distinct value from the function
// function only return one value

int main(){

    // int a = 10;
    // int *aptr;
    // aptr = &a;
    
    // cout<<a<<endl;
    // cout<<*aptr<<endl;

    // cout<<&a<<endl;
    // cout<<aptr<<endl;
    // // pointer arithmetic
    // // increment ++
    // // decrement --
    // // addition +
    // // subtraction -

    // aptr++;// here value is increment based on the data type
    // cout<<aptr<<endl;// as int take 4bytes so value increment by 4
    // cout<<*aptr<<endl;

    // int arr[] = {1,2,3,4};
    // int *arrPtr = arr;
    // cout<<*arrPtr<<endl;// this will give the first element because in array the variable name store the address of first element
    // // or we can say that the variable point to the first element of array

    // arrPtr++;// this will point to the second element
    // cout<<*arrPtr<<endl;// 2

    // arrPtr++;// this will point to the third element
    // cout<<*arrPtr<<endl;// 3

    // arrPtr++;// this will point to the fourth element
    // cout<<*arrPtr<<endl;// 4

    // arrPtr++;// this will point to the element after 4 element
    // cout<<*arrPtr<<endl;// garbage value in memory after 4th element because we only have the arr of 4 elements

    // arrPtr++;// this will point to the sixth element
    // cout<<*arrPtr<<endl;// garbage value

    int a = 2;
    int b = 3;
    swap(&a, &b);

    cout<<a<<" "<<b<<endl;


    
 
    return 0;
}