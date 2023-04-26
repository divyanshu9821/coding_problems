// this algorithm is called sieve of eratosthenes
#include<iostream>
using namespace std;

void all_primes(int n)// get prime numbers till 'n'
{
    int primes[n+1] = {0};// creating a array till n and initialize with 0

    // marking the multiples of the number with 1 in array
    for(int i = 2;i<n+1;i++){
        for(int j = i*i;j<n+1;j+=i)
            primes[j]=1;
    }

    // traversing again on array and find the number marked with 0 means they are not marked before
    // these unmarked numbers are primes
    for(int i = 2;i<=n;i++){
        if(primes[i]==0)
            cout<<i<<" ";
    }

    cout<<endl;
    return;
}

// prime factorization of a number
void prime_factor(int n){
    int arr[n+1];

    // setting the number equal to index value in the array
    for(int i = 2;i<=n;i++){
        arr[i] = i;
    }

    // setting smallest prime for that index
    for(int i = 2;i<=n;i++){
        if(arr[i]==i){// checking if the index is same as the element
            for(int j = i*i;j<=n;j+=i){
                if(arr[j]==j){// checking if it already changed to its smallest prime or not
                    arr[j] = i;
                }
            }
        }
    }

    while(n!=1){
        cout<<arr[n]<<" ";
        n/=arr[n];
    }
    cout<<endl;
    return;
}

int main(){

    // all_primes(50);
    prime_factor(500);

    return 0;
}