#include <iostream>
using namespace std;

int reverse(int num)
{
    int ans = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        ans = ans * 10 + lastdigit;
        num /= 10;
    }
    return ans;
}

void add_binary(int a, int b)
{
    int ans = 0;
    int prev_carry = 0;
    while (a > 0 && b > 0)
    {
        // when digit of both binary is zero
        if (a % 10 == 0 && b % 10 == 0)
        {
            // with prev carry
            if (prev_carry == 1)
            {
                ans = ans * 10 + 1;
                prev_carry = 0;
            }
            // without prev carry
            else
            {
                ans = ans * 10 + 0;
            }
        }
        // when digit of one of the binary is zero and other is one
        else if ((a % 10 == 1 && b % 10 == 0) || (a % 10 == 0 && b % 10 == 1))
        {
            // with prev carry
            if (prev_carry == 1)
            {
                ans = ans * 10 + 0;
                prev_carry = 1;
            }
            // without prev carry
            else
            {
                ans = ans * 10 + 1;
            }
        }
        // when digit of both binary is one
        else if (a % 10 == 1 && b % 10 == 1)
        {
            // with prev carry
            if (prev_carry == 1)
            {
                ans = ans * 10 + 1;
            }
            // without prev carry
            else
            {
                ans = ans * 10 + 0;
            }
            prev_carry = 1;
        }
        a /= 10;
        b /= 10;
    }

    // if any of the binary number has more digits
    while (a > 0)
    { // for first binary number
        // with previous carry
        if (prev_carry == 1)
        {
            if (a % 10 == 1)
            {
                ans = ans * 10 + 0;
                prev_carry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prev_carry = 0;
            }
        }
        // without previous carry
        else
            ans = ans * 10 + a % 10;

        a /= 10;
    }

    while (b > 0)
    { // for second binary number
        // with previous carry
        if (prev_carry == 1)
        {
            if (b % 10 == 1)
            {
                ans = ans * 10 + 0;
                prev_carry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prev_carry = 0;
            }
        }
        // without previous carry
        else
            ans = ans * 10 + b % 10;

        b /= 10;
    }

    // if a carry is left than extra most significant bit of 1 is added
    if (prev_carry == 1)
        ans = ans * 10 + 1;

    // now we got a answer which is reverse so we need to reverse the number.
    cout << reverse(ans) << endl;

    return;
}

int main()
{

    // add_binary(10101,11010);

    return 0;
}