#include<iostream>
using namespace std;

int main(){

    int b = 10; // this will store in stack
    int *a = new int();// memory will be allocating in heap
    // but variable name with the pointer to the memory in heap will store in stack

    *a = 10;

    cout<<a<<endl;// gives address
    cout<<*a<<endl;

    delete(a);// this will deallocate

    // now a become dangling pointer it means it point to someting we donot know
    // now we can do two things from it.
    // 1 use a for other purpose
    // 2 point a to null
    cout<<a<<endl;
    cout<<*a<<endl;

    a = new int[4]; // now a is allocated space for size 4 array in heap

    delete[] a;// deallocate

    a = NULL;    
    

    return 0;
}