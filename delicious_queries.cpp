// codechef, DQUERY TLE
#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n = 0;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int q;
    cin >> q;

    while (q > 0)
    {
        int p, k;
        cin >> p >> k;

        int non_prime_sum = 0; // store the sum of nums that are not divided by p
        int prime_count = 0;   // nums divided be p

        for (int i = 0; i < k; i++)
        {
            if (arr[i] % p != 0)
                non_prime_sum += arr[i];
            else
                prime_count++;
        }

        int primes_arr[n];
        
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % p == 0)
                primes_arr[i] = arr[i];
            else
                primes_arr[i] = -1;
        }

        sort(primes_arr, primes_arr + n, greater<int>());

        int prime_sum = 0;
        for(int i = 0;i<prime_count;i++){
            prime_sum+=primes_arr[i];
        }

        cout<<prime_sum+non_prime_sum<<endl;

        q--;
    }
}

int main()
{

    solve();

    return 0;
}