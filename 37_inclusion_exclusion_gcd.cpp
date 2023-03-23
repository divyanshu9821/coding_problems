#include <iostream>
using namespace std;

// find how many numbers till 'n' are divided by 'a' or 'b'
void divisiblity(int n, int a, int b)
{
    int set1 = n / a; // all the numbers which are divided by a
    int set2 = n / b; // all the numbers which are divided by b

    int ntrsctn_set1_set2 = n / (a * b); // all the numbers, divisible by a and b

    cout <<set1+set2-ntrsctn_set1_set2; // include set 1 and set 2 and exclude intersection because these elements occur twice as in set 1 and set 2
    return;
}

void euclid_gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    cout<<a<<endl;
}

int main()
{
    // divisiblity(100, 7, 8);
    euclid_gcd(10,60);
    return 0;
}