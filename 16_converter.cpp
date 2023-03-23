#include <iostream>
#include <string>
using namespace std;

// binary to decimal
void binary_decimal(int n)
{
    int x = 1; // this variable holds the value of 2^0, 2^1, 2^2 ...
    int ans = 0;
    while (n > 0)
    {
        int a = n % 10; // this variable holds the least significant number in this case bit
        if (a != 1 && a != 0)
        {
            cout << "Invalid binary digit entered" << endl;
            return;
        }
        ans += x * a;
        x *= 2;  // 2^n -> 2^(n+1)
        n /= 10; // this will remove the least significant bit at each step
    }
    cout << ans << endl;
    return;
}

// octal to decimal
void octal_decimal(int n)
{
    int x = 1; // this variable holds the value of 8^0, 8^1, 8^2 ...
    int ans = 0;
    while (n > 0)
    {
        int a = n % 10; // this variable holds the least significant number in this case bit
        if (a > 7)
        {
            cout << "invalid ocatal number entered" << endl;
            return;
        }
        ans += x * a;
        x *= 8;  // 8^n -> 8^(n+1)
        n /= 10; // this will remove the least significant bit at each step
    }
    cout << ans << endl;
    return;
}

// hexadecimal to decimal
void hex_decimal(string n)
{
    int x = 1; // this variable holds the value of 16^0, 16^1, 16^2 ...
    int ans = 0;
    int str_size = n.size();
    for (int i = str_size - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0'); // using ascii
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x * (n[i] - 'A' + 10); // adding ten is necessary as in hex A = 10 not 0
        }
        else
        {
            cout << "invalid hexadecimal number" << endl;
            return;
        }
        x *= 16; // 16^n -> 16^(n+1)
    }
    cout << ans << endl;
    return;
}

// decimal to binary
void decimal_binary(int n)
{
    int ans = 0;
    int x = 1;
    while (x <= n)
    {
        x *= 2; // this step is to get the maximum power, suppose 10 is n so 2^3 is maximum we need
    }
    x /= 2; // this is to decrease or reduce the power because it get extra in above loop
    while (x > 0)
    {
        int last_digit = n / x;
        n -= last_digit * x;
        x /= 2;
        ans = ans * 10 + last_digit;
    }
    cout << ans << endl;
    return;
}

// decimal to octal
void decimal_octal(int n)
{
    int ans = 0;
    int x = 1;
    while (x <= n)
    {
        x *= 8; // this step is to get the maximum power, suppose 20 is n so 8^1 is maximum we need
    }
    x /= 8; // this is to decrease or reduce the power because it get extra in above loop
    while (x > 0)
    {
        int last_digit = n / x;
        n -= last_digit * x;
        x /= 8;
        ans = ans * 10 + last_digit;
    }
    cout << ans << endl;
    return;
}

// decimal to hexadecimal
void decimal_hex(int n)
{
    string ans = "";
    int x = 1;
    while (x <= n)
        x *= 16;
    x /= 16;
    while (x > 0)
    {
        int last_digi = n / x;
        n -= last_digi * x;
        x /= 16;
        if (last_digi <= 9)
            ans = ans + to_string(last_digi); // to_string function convert int to string.
        else
        {
            char c = 'A' + last_digi - 10;
            ans.push_back(c); // function from STL
        }
    }
    cout << ans << endl;
    return;
}

int main()
{
    // binary_decimal(1101);
    // octal_decimal(715);
    // hex_decimal("2F");
    // decimal_binary(25);
    // decimal_octal(30);
    // decimal_hex(30);
    return 0;
}